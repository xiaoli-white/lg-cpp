#include <ir.h>

#include <utility>

namespace lg::ir
{
    namespace base
    {
    }

    namespace function
    {
        std::any IRFunction::accept(IRVisitor* visitor, std::any additional)
        {
            return visitor->visitFunction(this, std::move(additional));
        }

        std::string IRFunction::toString()
        {
            return "";
        }
        std::any IRLocalVariable::accept(IRVisitor* visitor, std::any additional)
        {
            return  visitor->visitLocalVariable(this, std::move(additional));
        }

    }

    namespace structure
    {
    }

    std::any IRVisitor::visit(base::IRNode* node, std::any additional)
    {
        return node->accept(this, std::move(additional));
    }

    std::any IRVisitor::visitModule(IRModule* module, std::any additional)
    {
        for (auto& [name, function] : module->functions)
        {
            visit(function, additional);
        }
        for (auto& [name, structure] : module->structures)
        {
            visit(structure, additional);
        }
        for (auto& [name, global] : module->globals)
        {
            visit(global, additional);
        }
        return nullptr;
    }


    std::any IRModule::accept(IRVisitor* visitor, std::any additional)
    {
        return visitor->visitModule(this, std::move(additional));
    }

    std::string IRModule::toString()
    {
        return "";
    }
}
