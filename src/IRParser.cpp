//
// Created by xiaoli on 2025/11/24.
//

#include <IRParser.h>

#include "dumper.h"

namespace lg::ir::parser
{
    IRParser::IRParser(IRModule* module) : module(module)
    {
    }

    std::any IRParser::visitProgram(LGIRGrammarParser::ProgramContext* context)
    {
        for (auto& func : context->function())
        {
            visit(func->type());
            auto* returnType = std::any_cast<type::IRType*>(stack.top());
            stack.pop();
            visit(func->localVariables(0));
            const auto args = std::any_cast<std::vector<function::IRLocalVariable*>>(stack.top());
            stack.pop();
            visit(func->localVariables(1));
            const auto locals = std::any_cast<std::vector<function::IRLocalVariable*>>(stack.top());
            stack.pop();
            auto* function = new function::IRFunction({}, returnType, func->IDENTIFIER()->getText(), args, locals,
                                                      new base::IRControlFlowGraph());
            module->putFunction(function);
        }
        for (auto& func : context->function())visit(func);
        return nullptr;
    }

    std::any IRParser::visitFunction(LGIRGrammarParser::FunctionContext* context)
    {
        currentFunction = module->getFunction(context->IDENTIFIER()->getText());
        for (auto* basicBlock : context->basicBlock())
        {
            auto* block = new base::IRBasicBlock(basicBlock->IDENTIFIER()->getText());
            currentFunction->addBasicBlock(block);
        }
        for (auto* basicBlock : context->basicBlock())visit(basicBlock);
        return nullptr;
    }

    std::any IRParser::visitBasicBlock(LGIRGrammarParser::BasicBlockContext* context)
    {
        auto* block = currentFunction->getBasicBlock(context->IDENTIFIER()->getText());
        builder.setInsertPoint(block);
        for (auto* statement : context->statement())
        {
            visit(statement);
        }
        return nullptr;
    }

    std::any IRParser::visitLocalVariables(LGIRGrammarParser::LocalVariablesContext* context)
    {
        std::vector<function::IRLocalVariable*> fields;
        for (auto* localVariable : context->localVariable())
        {
            visit(localVariable);
            fields.emplace_back(std::any_cast<function::IRLocalVariable*>(stack.top()));
            stack.pop();
        }
        stack.emplace(fields);
        return nullptr;
    }

    std::any IRParser::visitLocalVariable(LGIRGrammarParser::LocalVariableContext* context)
    {
        visit(context->type());
        auto* type = std::any_cast<type::IRType*>(stack.top());
        stack.pop();
        stack.emplace(new function::IRLocalVariable(type, context->IDENTIFIER()->getText()));
        return nullptr;
    }

    std::any IRParser::visitAsm(LGIRGrammarParser::AsmContext* context)
    {
        visit(context->values());
        const auto values = std::any_cast<std::vector<value::IRValue*>>(stack.top());
        stack.pop();
        const auto assembly = context->STRING_LITERAL(0)->getText();
        const auto constraints = context->STRING_LITERAL(1)->getText();
        builder.createAsm(assembly.substr(1, assembly.length() - 2), constraints.substr(1, constraints.length() - 2),
                          values);
        return nullptr;
    }
    std::any IRParser::visitBinaryOperates(LGIRGrammarParser::BinaryOperatesContext* context)
    {

        return nullptr;
    }


    std::any IRParser::visitGoto(LGIRGrammarParser::GotoContext* context)
    {
        visit(context->label());
        builder.createGoto(std::any_cast<base::IRBasicBlock*>(stack.top()));
        stack.pop();
        return nullptr;
    }

    std::any IRParser::visitReturn(LGIRGrammarParser::ReturnContext* context)
    {
        value::IRValue* value;
        if (context->value())
        {
            visit(context->value());
            value = std::any_cast<value::IRValue*>(stack.top());
            stack.pop();
        }
        else
        {
            value = nullptr;
        }
        builder.createReturn(value);
        return nullptr;
    }

    std::any IRParser::visitValues(LGIRGrammarParser::ValuesContext* context)
    {
        std::vector<value::IRValue*> values;
        for (auto value : context->value())
        {
            visit(value);
            values.push_back(std::any_cast<value::IRValue*>(stack.top()));
            stack.pop();
        }
        stack.push(values);
        return nullptr;
    }

    std::any IRParser::visitIntegerConstant(LGIRGrammarParser::IntegerConstantContext* context)
    {
        visit(context->integerType());
        auto* type = dynamic_cast<type::IRIntegerType*>(std::any_cast<type::IRType*>(stack.top()));
        stack.pop();
        stack.emplace(
            static_cast<value::IRValue*>(new value::constant::IRIntegerConstant(
                type, std::stoll(context->INT_NUMBER()->getText()))));
        return nullptr;
    }


    std::any IRParser::visitIntegerType(LGIRGrammarParser::IntegerTypeContext* context)
    {
        if (context->I1())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getBooleanType()));
        }
        else if (context->I8())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getInt8Type()));
        }
        else if (context->I16())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getInt16Type()));
        }
        else if (context->I32())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getInt32Type()));
        }
        else if (context->I64())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getInt64Type()));
        }
        else if (context->U8())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getUnsignedInt8Type()));
        }
        else if (context->U16())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getUnsignedInt16Type()));
        }
        else if (context->U32())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getUnsignedInt32Type()));
        }
        else if (context->U64())
        {
            stack.emplace(static_cast<type::IRType*>(type::IRIntegerType::getUnsignedInt64Type()));
        }
        else
        {
            throw std::runtime_error("Invalid integer type");
        }
        return nullptr;
    }

    std::any IRParser::visitLabel(LGIRGrammarParser::LabelContext* context)
    {
        std::cout << context->IDENTIFIER()->getText() << std::endl;
        stack.push(currentFunction->getBasicBlock(context->IDENTIFIER()->getText()));
        return nullptr;
    }


    IRModule* parse(const std::string& code)
    {
        std::istringstream stream(code);
        antlr4::ANTLRInputStream input(stream);
        return parse(input);
    }

    IRModule* parse(std::istream& stream)
    {
        antlr4::ANTLRInputStream input(stream);
        return parse(input);
    }

    IRModule* parse(antlr4::ANTLRInputStream& stream)
    {
        LGIRGrammarLexer lexer(&stream);
        antlr4::CommonTokenStream tokens(&lexer);
        LGIRGrammarParser grammarParser(&tokens);
        auto program = grammarParser.program();
        auto* module = new IRModule();
        IRParser parser(module);
        parser.visit(program);
        return module;
    }
}
