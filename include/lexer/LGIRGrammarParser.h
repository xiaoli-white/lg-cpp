
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LGIRGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, I1 = 20, 
    U1 = 21, I8 = 22, U8 = 23, I16 = 24, U16 = 25, I32 = 26, U32 = 27, I64 = 28, 
    U64 = 29, FLOAT = 30, DOUBLE = 31, VOID = 32, GLOBAL = 33, STRUCTURE = 34, 
    FUNCTION = 35, NOP = 36, STACK_ALLOC = 37, LOAD = 38, STORE = 39, ASM = 40, 
    GOTO = 41, INVOKE = 42, RETURN = 43, GETELEMENTPTR = 44, CMP = 45, CONDITIONAL_JUMP = 46, 
    INC = 47, DEC = 48, NOT = 49, NEG = 50, ADD = 51, SUB = 52, MUL = 53, 
    DIV = 54, MOD = 55, AND = 56, OR = 57, XOR = 58, SHL = 59, SHR = 60, 
    USHR = 61, ZEXT = 62, SEXT = 63, TRUNC = 64, ITOF = 65, FTOI = 66, ITOP = 67, 
    PTOI = 68, PTOP = 69, FEXT = 70, FTRUNC = 71, FUNCREF = 72, GLOBALREF = 73, 
    LOCALREF = 74, LABEL = 75, INT_NUMBER = 76, DECIMAL_NUMBER = 77, WS = 78, 
    STRING_LITERAL = 79, IDENTIFIER = 80
  };

  enum {
    RuleProgram = 0, RuleGlobalVariable = 1, RuleStructure = 2, RuleFields = 3, 
    RuleField = 4, RuleFunction = 5, RuleStatement = 6, RuleStack_alloc = 7, 
    RuleLoad = 8, RuleStore = 9, RuleAsm = 10, RuleGoto = 11, RuleInvoke = 12, 
    RuleReturn = 13, RuleSetRegister = 14, RuleGetElementPointer = 15, RuleCmp = 16, 
    RuleConditionalJump = 17, RuleUnaryOperates = 18, RuleBinaryOperates = 19, 
    RuleTypeCast = 20, RuleType = 21, RuleBaseType = 22, RuleIntegerType = 23, 
    RuleDecimalType = 24, RuleArrayType = 25, RuleVoidType = 26, RuleStructureType = 27, 
    RuleValues = 28, RuleValue = 29, RuleConstant = 30, RuleIntegerConstant = 31, 
    RuleDecimalConstant = 32, RuleArrayConstant = 33, RuleFunctionReference = 34, 
    RuleGlobalReference = 35, RuleLocalReference = 36, RuleRegister = 37, 
    RuleRegisterName = 38, RuleLabel = 39, RuleCondition = 40, RuleUnaryOperator = 41, 
    RuleBinaryOperator = 42, RuleTypeCastKind = 43
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
  class StatementContext;
  class Stack_allocContext;
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
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<FieldsContext *> fields();
    FieldsContext* fields(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOP();
    Stack_allocContext *stack_alloc();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Stack_allocContext : public antlr4::ParserRuleContext {
  public:
    Stack_allocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegisterNameContext *registerName();
    antlr4::tree::TerminalNode *STACK_ALLOC();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stack_allocContext* stack_alloc();

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
    antlr4::tree::TerminalNode *U1();
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

