
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LGIRGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, I1 = 22, I8 = 23, U8 = 24, I16 = 25, U16 = 26, I32 = 27, 
    U32 = 28, I64 = 29, U64 = 30, FLOAT = 31, DOUBLE = 32, VOID = 33, GLOBAL = 34, 
    STRUCTURE = 35, FUNCTION = 36, NOP = 37, STACK_ALLOC = 38, LOAD = 39, 
    STORE = 40, ASM = 41, GOTO = 42, INVOKE = 43, RETURN = 44, GETELEMENTPTR = 45, 
    CMP = 46, CONDITIONAL_JUMP = 47, INC = 48, DEC = 49, NOT = 50, NEG = 51, 
    ADD = 52, SUB = 53, MUL = 54, DIV = 55, MOD = 56, AND = 57, OR = 58, 
    XOR = 59, SHL = 60, SHR = 61, USHR = 62, ZEXT = 63, SEXT = 64, TRUNC = 65, 
    ITOF = 66, FTOI = 67, ITOP = 68, PTOI = 69, PTOP = 70, FEXT = 71, FTRUNC = 72, 
    FUNCREF = 73, GLOBALREF = 74, LOCALREF = 75, LABEL = 76, ELLIPSIS = 77, 
    MULTIPLY = 78, INT_NUMBER = 79, DECIMAL_NUMBER = 80, WS = 81, STRING_LITERAL = 82, 
    IDENTIFIER = 83
  };

  enum {
    RuleProgram = 0, RuleGlobalVariable = 1, RuleStructure = 2, RuleFields = 3, 
    RuleField = 4, RuleFunction = 5, RuleLocalVariables = 6, RuleLocalVariable = 7, 
    RuleBasicBlock = 8, RuleStatement = 9, RuleNop = 10, RuleStackAlloc = 11, 
    RuleLoad = 12, RuleStore = 13, RuleAsm = 14, RuleGoto = 15, RuleInvoke = 16, 
    RuleReturn = 17, RuleSetRegister = 18, RuleGetElementPointer = 19, RuleCmp = 20, 
    RuleConditionalJump = 21, RuleUnaryOperates = 22, RuleBinaryOperates = 23, 
    RuleTypeCast = 24, RuleType = 25, RuleBaseType = 26, RuleIntegerType = 27, 
    RuleDecimalType = 28, RuleArrayType = 29, RuleVoidType = 30, RuleStructureType = 31, 
    RuleFunctionReferenceType = 32, RuleTypes = 33, RuleValues = 34, RuleValue = 35, 
    RuleConstant = 36, RuleIntegerConstant = 37, RuleDecimalConstant = 38, 
    RuleArrayConstant = 39, RuleFunctionReference = 40, RuleGlobalReference = 41, 
    RuleLocalReference = 42, RuleRegister = 43, RuleRegisterName = 44, RuleLabel = 45, 
    RuleCondition = 46, RuleUnaryOperator = 47, RuleBinaryOperator = 48, 
    RuleTypeCastKind = 49
  };

  explicit LGIRGrammarParser(antlr4::TokenStream *input);

  LGIRGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LGIRGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class GlobalVariableContext;
  class StructureContext;
  class FieldsContext;
  class FieldContext;
  class FunctionContext;
  class LocalVariablesContext;
  class LocalVariableContext;
  class BasicBlockContext;
  class StatementContext;
  class NopContext;
  class StackAllocContext;
  class LoadContext;
  class StoreContext;
  class AsmContext;
  class GotoContext;
  class InvokeContext;
  class ReturnContext;
  class SetRegisterContext;
  class GetElementPointerContext;
  class CmpContext;
  class ConditionalJumpContext;
  class UnaryOperatesContext;
  class BinaryOperatesContext;
  class TypeCastContext;
  class TypeContext;
  class BaseTypeContext;
  class IntegerTypeContext;
  class DecimalTypeContext;
  class ArrayTypeContext;
  class VoidTypeContext;
  class StructureTypeContext;
  class FunctionReferenceTypeContext;
  class TypesContext;
  class ValuesContext;
  class ValueContext;
  class ConstantContext;
  class IntegerConstantContext;
  class DecimalConstantContext;
  class ArrayConstantContext;
  class FunctionReferenceContext;
  class GlobalReferenceContext;
  class LocalReferenceContext;
  class RegisterContext;
  class RegisterNameContext;
  class LabelContext;
  class ConditionContext;
  class UnaryOperatorContext;
  class BinaryOperatorContext;
  class TypeCastKindContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<GlobalVariableContext *> globalVariable();
    GlobalVariableContext* globalVariable(size_t i);
    std::vector<StructureContext *> structure();
    StructureContext* structure(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  GlobalVariableContext : public antlr4::ParserRuleContext {
  public:
    GlobalVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalVariableContext* globalVariable();

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCTURE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructureContext* structure();

  class  FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsContext* fields();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<LocalVariablesContext *> localVariables();
    LocalVariablesContext* localVariables(size_t i);
    std::vector<BasicBlockContext *> basicBlock();
    BasicBlockContext* basicBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  LocalVariablesContext : public antlr4::ParserRuleContext {
  public:
    LocalVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LocalVariableContext *> localVariable();
    LocalVariableContext* localVariable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVariablesContext* localVariables();

  class  LocalVariableContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVariableContext* localVariable();

  class  BasicBlockContext : public antlr4::ParserRuleContext {
  public:
    BasicBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicBlockContext* basicBlock();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NopContext *nop();
    StackAllocContext *stackAlloc();
    LoadContext *load();
    StoreContext *store();
    AsmContext *asm_();
    GotoContext *goto_();
    InvokeContext *invoke();
    ReturnContext *return_();
    SetRegisterContext *setRegister();
    GetElementPointerContext *getElementPointer();
    CmpContext *cmp();
    ConditionalJumpContext *conditionalJump();
    UnaryOperatesContext *unaryOperates();
    BinaryOperatesContext *binaryOperates();
    TypeCastContext *typeCast();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  NopContext : public antlr4::ParserRuleContext {
  public:
    NopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NopContext* nop();

  class  StackAllocContext : public antlr4::ParserRuleContext {
  public:
    StackAllocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    antlr4::tree::TerminalNode *STACK_ALLOC();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StackAllocContext* stackAlloc();

  class  LoadContext : public antlr4::ParserRuleContext {
  public:
    LoadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    antlr4::tree::TerminalNode *LOAD();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadContext* load();

  class  StoreContext : public antlr4::ParserRuleContext {
  public:
    StoreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORE();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoreContext* store();

  class  AsmContext : public antlr4::ParserRuleContext {
  public:
    AsmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASM();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    ValuesContext *values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmContext* asm_();

  class  GotoContext : public antlr4::ParserRuleContext {
  public:
    GotoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoContext* goto_();

  class  InvokeContext : public antlr4::ParserRuleContext {
  public:
    InvokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVOKE();
    TypeContext *type();
    ValueContext *value();
    ValuesContext *values();
    RegisterNameContext *registerName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InvokeContext* invoke();

  class  ReturnContext : public antlr4::ParserRuleContext {
  public:
    ReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnContext* return_();

  class  SetRegisterContext : public antlr4::ParserRuleContext {
  public:
    SetRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetRegisterContext* setRegister();

  class  GetElementPointerContext : public antlr4::ParserRuleContext {
  public:
    GetElementPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    antlr4::tree::TerminalNode *GETELEMENTPTR();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetElementPointerContext* getElementPointer();

  class  CmpContext : public antlr4::ParserRuleContext {
  public:
    CmpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    antlr4::tree::TerminalNode *CMP();
    ConditionContext *condition();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CmpContext* cmp();

  class  ConditionalJumpContext : public antlr4::ParserRuleContext {
  public:
    ConditionalJumpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_JUMP();
    ConditionContext *condition();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalJumpContext* conditionalJump();

  class  UnaryOperatesContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    UnaryOperatorContext *unaryOperator();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatesContext* unaryOperates();

  class  BinaryOperatesContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperatesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    BinaryOperatorContext *binaryOperator();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryOperatesContext* binaryOperates();

  class  TypeCastContext : public antlr4::ParserRuleContext {
  public:
    TypeCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    TypeCastKindContext *typeCastKind();
    ValueContext *value();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeCastContext* typeCast();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeContext *baseType();
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerTypeContext *integerType();
    DecimalTypeContext *decimalType();
    ArrayTypeContext *arrayType();
    VoidTypeContext *voidType();
    StructureTypeContext *structureType();
    FunctionReferenceTypeContext *functionReferenceType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseTypeContext* baseType();

  class  IntegerTypeContext : public antlr4::ParserRuleContext {
  public:
    IntegerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *I1();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *U64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerTypeContext* integerType();

  class  DecimalTypeContext : public antlr4::ParserRuleContext {
  public:
    DecimalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalTypeContext* decimalType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  VoidTypeContext : public antlr4::ParserRuleContext {
  public:
    VoidTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VoidTypeContext* voidType();

  class  StructureTypeContext : public antlr4::ParserRuleContext {
  public:
    StructureTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCTURE();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructureTypeContext* structureType();

  class  FunctionReferenceTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionReferenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypesContext *types();
    TypeContext *type();
    antlr4::tree::TerminalNode *ELLIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionReferenceTypeContext* functionReferenceType();

  class  TypesContext : public antlr4::ParserRuleContext {
  public:
    TypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypesContext* types();

  class  ValuesContext : public antlr4::ParserRuleContext {
  public:
    ValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesContext* values();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterContext *register_();
    ConstantContext *constant();
    FunctionReferenceContext *functionReference();
    GlobalReferenceContext *globalReference();
    LocalReferenceContext *localReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    DecimalConstantContext *decimalConstant();
    ArrayConstantContext *arrayConstant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  IntegerConstantContext : public antlr4::ParserRuleContext {
  public:
    IntegerConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerTypeContext *integerType();
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerConstantContext* integerConstant();

  class  DecimalConstantContext : public antlr4::ParserRuleContext {
  public:
    DecimalConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalTypeContext *decimalType();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalConstantContext* decimalConstant();

  class  ArrayConstantContext : public antlr4::ParserRuleContext {
  public:
    ArrayConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayTypeContext *arrayType();
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayConstantContext* arrayConstant();

  class  FunctionReferenceContext : public antlr4::ParserRuleContext {
  public:
    FunctionReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCREF();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionReferenceContext* functionReference();

  class  GlobalReferenceContext : public antlr4::ParserRuleContext {
  public:
    GlobalReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBALREF();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalReferenceContext* globalReference();

  class  LocalReferenceContext : public antlr4::ParserRuleContext {
  public:
    LocalReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALREF();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalReferenceContext* localReference();

  class  RegisterContext : public antlr4::ParserRuleContext {
  public:
    RegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    RegisterNameContext *registerName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegisterContext* register_();

  class  RegisterNameContext : public antlr4::ParserRuleContext {
  public:
    RegisterNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegisterNameContext* registerName();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NEG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  BinaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *USHR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryOperatorContext* binaryOperator();

  class  TypeCastKindContext : public antlr4::ParserRuleContext {
  public:
    TypeCastKindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ZEXT();
    antlr4::tree::TerminalNode *SEXT();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *ITOF();
    antlr4::tree::TerminalNode *FTOI();
    antlr4::tree::TerminalNode *ITOP();
    antlr4::tree::TerminalNode *PTOI();
    antlr4::tree::TerminalNode *PTOP();
    antlr4::tree::TerminalNode *FEXT();
    antlr4::tree::TerminalNode *FTRUNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeCastKindContext* typeCastKind();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

