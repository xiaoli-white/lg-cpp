//
// Created by xiaoli on 2025/11/23.
//

#pragma once
#ifndef LG_CPP_BINDING_LG_CPP_BINDING_H
#define LG_CPP_BINDING_LG_CPP_BINDING_H
#include <any>
#include <cstdint>
#include <map>
#include <string>
#include <utility>
#include <vector>

#include "ir.h"

namespace lg::ir
{
    class IRModule;
    class IRBuilder;
    class IRVisitor;
    class IRDumper;

    namespace base
    {
        class IRNode;
        class IRGlobalVariable;
        class IRControlFlowGraph;
        class IRBasicBlock;
        enum class IRCondition;
    }

    namespace type
    {
        class IRType;
        class IRIntegerType;
        class IRFloatType;
        class IRDoubleType;
        class IRStructureType;
        class IRArrayType;
        class IRPointerType;
        class IRVoidType;
    }

    namespace value
    {
        class IRValue;
        class IRRegister;
        class IRFunctionReference;
        class IRGlobalVariableReference;
        class IRLocalVariableReference;

        namespace constant
        {
            class IRConstant;
            class IRIntegerConstant;
            class IRFloatConstant;
            class IRDoubleConstant;
            class IRArrayConstant;
            class IRStringConstant;
        }
    }

    namespace function
    {
        class IRFunction;
        class IRLocalVariable;
    }

    namespace structure
    {
        class IRStructure;
        class IRField;
    }

    namespace instruction
    {
        class IRInstruction;
        class IRAssembly;
        class IRBinaryOperates;
        class IRUnaryOperates;
        class IRGetElementPointer;
        class IRCompare;
        class IRConditionalJump;
        class IRGoto;
        class IRInvoke;
        class IRReturn;
        class IRLoad;
        class IRStore;
        class IRNop;
        class IRSetRegister;
        class IRStackAllocate;
        class IRTypeCast;
    }

    namespace base
    {
        class IRNode
        {
        public:
            virtual ~IRNode() = default;
            virtual std::any accept(IRVisitor* visitor, std::any additional) = 0;
            virtual std::string toString() = 0;
        };

        class IRGlobalVariable : public IRNode
        {
        public:
            type::IRType* type;
            std::string name;
            value::constant::IRConstant* initializer = nullptr;
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRControlFlowGraph
        {
        public:
            function::IRFunction* function = nullptr;
            std::map<std::string, IRBasicBlock*> basicBlocks;
            std::map<IRBasicBlock*, std::vector<IRBasicBlock*>> predecessors;
            std::map<IRBasicBlock*, std::vector<IRBasicBlock*>> successors;
            std::string toString();
        };

        class IRBasicBlock
        {
        public:
            IRBasicBlock* cfg = nullptr;
            std::string name;
            std::vector<instruction::IRInstruction*> instructions;

            IRBasicBlock(std::string name, std::vector<instruction::IRInstruction*> instructions) :
                name(std::move(name)), instructions(std::move(instructions))
            {
            }

            std::string toString();
        };

        enum class IRCondition
        {
            E,
            NE,
            L,
            LE,
            G,
            GE,
            IF_TRUE,
            IF_FALSE
        };

        std::string conditionToString();
    }

    namespace type
    {
        class IRType : public base::IRNode
        {
        };

        class IRIntegerType final : public IRType
        {
        public:
            enum class Size: uint8_t
            {
                OneBit = 1,
                OneByte = 8,
                TwoBytes = 16,
                FourBytes = 32,
                EightBytes = 64
            };

            Size size;
            bool _unsigned;
            IRIntegerType(Size size, bool _unsigned);

            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRFloatType final : public IRType
        {
        public:
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRDoubleType final : public IRType
        {
        public:
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRStructureType final : public IRType
        {
        public:
            structure::IRStructure* structure;
            explicit IRStructureType(structure::IRStructure* structure);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRArrayType final : public IRType
        {
        public:
            IRType* base;
            uint64_t size;
            IRArrayType(IRType* base, uint64_t size);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRPointerType final : public IRType
        {
        public:
            IRType* base;
            explicit IRPointerType(IRType* base);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRVoidType : public IRType
        {
        public:
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
    }

    namespace value
    {
        class IRValue : public base::IRNode
        {
        public:
            virtual type::IRType* getType() = 0;
        };
        class IRRegister final : public IRValue
        {
        public:
            instruction::IRInstruction* def;
            type::IRType* type;
            std::string name;
            IRRegister(type::IRType* type, std::string name);
            type::IRType* getType() override;
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
        class IRFunctionReference final : public IRValue
        {
        public:
            function::IRFunction* function;
            explicit IRFunctionReference(function::IRFunction*  function);
            type::IRType* getType() override;
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
        class IRGlobalVariableReference final : public IRValue
        {
        public:
            type::IRType* type;
            base::IRGlobalVariable* variable;
            explicit IRGlobalVariableReference(base::IRGlobalVariable* variable);
            type::IRType* getType() override;
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
        class IRLocalVariableReference final : public IRValue
        {
        public:
            type::IRType* type;
            function::IRLocalVariable* variable;
            explicit IRLocalVariableReference(function::IRLocalVariable* variable);
            type::IRType* getType() override;
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        namespace constant
        {
            class IRConstant:public IRValue{};
            class IRIntegerConstant final : public IRConstant
            {
            public:
                type::IRIntegerType* type;
                uint64_t value;
                IRIntegerConstant(type::IRIntegerType* type, uint64_t value);
                type::IRType* getType() override;
                std::any accept(IRVisitor* visitor, std::any additional) override;
                std::string toString() override;
            };
            class IRFloatConstant final : public IRConstant
            {
            public:
                float value;
                explicit IRFloatConstant(float value);
                type::IRType* getType() override;
                std::any accept(IRVisitor* visitor, std::any additional) override;
                std::string toString() override;
            };
            class IRDoubleConstant final : public IRConstant
            {
            public:
                double value;
                explicit IRDoubleConstant(double value);
                type::IRType* getType() override;
                std::any accept(IRVisitor* visitor, std::any additional) override;
                std::string toString() override;
            };
            class IRArrayConstant final : public IRConstant
            {
            public:
                type::IRArrayType* type;
                std::vector<IRConstant*> values;
                IRArrayConstant(type::IRArrayType* type, std::vector<IRConstant*> values);
                type::IRType* getType() override;
                std::any accept(IRVisitor* visitor, std::any additional) override;
                std::string toString() override;
            };
            class IRStringConstant final : public IRConstant
            {
            public:
                type::IRType* type;
                std::string value;
                explicit IRStringConstant(std::string value);
                type::IRType* getType() override;
                std::any accept(IRVisitor* visitor, std::any additional) override;
                std::string toString() override;
            };
        }
    }

    namespace function
    {
        class IRFunction final : public base::IRNode
        {
        public:
            std::vector<std::string> attributes;
            type::IRType* returnType;
            std::string name;
            std::vector<IRLocalVariable*> args;
            std::vector<IRLocalVariable*> locals;
            base::IRControlFlowGraph* cfg;
            IRFunction(std::vector<std::string> attributes, type::IRType* returnType, std::string name, std::vector<IRLocalVariable*> args, std::vector<IRLocalVariable*> locals, base::IRControlFlowGraph* cfg);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };

        class IRLocalVariable final : public base::IRNode
        {
        public:
            type::IRType* type;
            std::string name;
            IRLocalVariable(type::IRType* type, std::string name);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
    }

    namespace structure
    {
        class IRStructure final : public base::IRNode
        {
        public:
            std::vector<std::string> attributes;
            std::string name;
            std::vector<IRField*> fields;
            IRStructure(std::vector<std::string> attributes, std::string name, std::vector<IRField*> fields);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
        class IRField final : public base::IRNode
        {
        public:
            type::IRType* type;
            std::string name;
            IRField(type::IRType* type, std::string name);
            std::any accept(IRVisitor* visitor, std::any additional) override;
            std::string toString() override;
        };
    }

    namespace instruction
    {
        class IRInstruction : public base::IRNode
        {
        };
    }

    class IRVisitor
    {
    public:
        virtual ~IRVisitor() = default;
        virtual std::any visit(base::IRNode* node, std::any additional);
        virtual std::any visitModule(IRModule* module, std::any additional);
        virtual std::any visitGlobalVariable(base::IRGlobalVariable* irGlobalVariable, std::any additional);
        virtual std::any visitFunction(function::IRFunction* irFunction, std::any additional);
        virtual std::any visitLocalVariable(function::IRLocalVariable* irLocalVariable, std::any additional);
    };

    class IRModule : public base::IRNode
    {
    public:
        std::map<std::string, base::IRGlobalVariable*> globals;
        std::map<std::string, structure::IRStructure*> structures;
        std::map<std::string, function::IRFunction*> functions;

        ~IRModule() override = default;
        std::any accept(IRVisitor* visitor, std::any additional) override;
        std::string toString() override;
    };
}

#endif //LG_CPP_BINDING_LG_CPP_BINDING_H
