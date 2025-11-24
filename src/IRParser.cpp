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

    std::any IRParser::visitFunction(LGIRGrammarParser::FunctionContext* context)
    {
        visit(context->type());
        auto* returnType = std::any_cast<type::IRType*>(stack.top());
        stack.pop();
        visit(context->localVariables(0));
        const auto args = std::any_cast<std::vector<function::IRLocalVariable*>>(stack.top());
        stack.pop();
        visit(context->localVariables(1));
        const auto locals = std::any_cast<std::vector<function::IRLocalVariable*>>(stack.top());
        stack.pop();
        auto* function = new function::IRFunction({}, returnType, context->IDENTIFIER()->getText(), args, locals,
                                                  new base::IRControlFlowGraph());
        module->putFunction(function);
        currentFunction = function;
        for (auto* basicBlock : context->basicBlock())
        {
            visit(basicBlock);
        }
        return nullptr;
    }

    std::any IRParser::visitBasicBlock(LGIRGrammarParser::BasicBlockContext* context)
    {
        auto* block = new base::IRBasicBlock(context->IDENTIFIER()->getText());
        currentFunction->addBasicBlock(block);
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
    std::any IRParser::visitIntegerConstant(LGIRGrammarParser::IntegerConstantContext* context)
    {
        visit(context->integerType());
        auto* type = dynamic_cast<type::IRIntegerType*>(std::any_cast<type::IRType*>(stack.top()));
        stack.pop();
        stack.emplace(static_cast<value::IRValue*>(new value::constant::IRIntegerConstant(type, std::stoll(context->INT_NUMBER()->getText()))));
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
