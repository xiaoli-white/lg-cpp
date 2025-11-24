//
// Created by xiaoli on 2025/11/24.
//

#pragma once
#ifndef LG_CPP_BINDING_DUMPER_H
#define LG_CPP_BINDING_DUMPER_H

#include <ir.h>

namespace lg::ir
{
    class IRDumper;

    class IRDumper: public IRVisitor
    {
    private:
        std::ostream& out;
    public:
        IRDumper();
        explicit IRDumper(std::ostream& out);
        std::any visitGlobalVariable(base::IRGlobalVariable* irGlobalVariable, std::any additional) override;
        std::any visitStructure(structure::IRStructure* irStructure, std::any additional) override;
        std::any visitFunction(function::IRFunction* irFunction, std::any additional) override;
        std::any visitAssembly(instruction::IRAssembly* irAssembly, std::any additional) override;
        std::any visitBinaryOperates(instruction::IRBinaryOperates* irBinaryOperates, std::any additional) override;
        std::any visitUnaryOperates(instruction::IRUnaryOperates* irUnaryOperates, std::any additional) override;
        std::any visitGetElementPointer(instruction::IRGetElementPointer* irGetElementPointer, std::any additional) override;
        std::any visitCompare(instruction::IRCompare* irCompare, std::any additional) override;
        std::any visitConditionalJump(instruction::IRConditionalJump* irConditionalJump, std::any additional) override;
        std::any visitGoto(instruction::IRGoto* irGoto, std::any additional) override;
        std::any visitInvoke(instruction::IRInvoke* irInvoke, std::any additional) override;
        std::any visitReturn(instruction::IRReturn* irReturn, std::any additional) override;
        std::any visitLoad(instruction::IRLoad* irLoad, std::any additional) override;
        std::any visitStore(instruction::IRStore* irStore, std::any additional) override;
        std::any visitNop(instruction::IRNop* irNop, std::any additional) override;
        std::any visitSetRegister(instruction::IRSetRegister* irSetRegister, std::any additional) override;
        std::any visitStackAllocate(instruction::IRStackAllocate* irStackAllocate, std::any additional) override;
        std::any visitTypeCast(instruction::IRTypeCast* irTypeCast, std::any additional) override;
    };
}

#endif //LG_CPP_BINDING_DUMPER_H