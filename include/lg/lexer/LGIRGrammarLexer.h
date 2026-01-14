
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LGIRGrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, I1 = 23, I8 = 24, U8 = 25, I16 = 26, U16 = 27, 
    I32 = 28, U32 = 29, I64 = 30, U64 = 31, FLOAT = 32, DOUBLE = 33, VOID = 34, 
    CONST = 35, GLOBAL = 36, STRUCTURE = 37, EXTERN = 38, FUNCTION = 39, 
    NOP = 40, STACK_ALLOC = 41, LOAD = 42, STORE = 43, ASM = 44, GOTO = 45, 
    INVOKE = 46, RETURN = 47, GETELEMENTPTR = 48, CMP = 49, CONDITIONAL_JUMP = 50, 
    PHI = 51, SWITCH = 52, INC = 53, DEC = 54, NOT = 55, NEG = 56, ADD = 57, 
    SUB = 58, MUL = 59, DIV = 60, MOD = 61, AND = 62, OR = 63, XOR = 64, 
    SHL = 65, SHR = 66, USHR = 67, ZEXT = 68, SEXT = 69, TRUNC = 70, INTTOF = 71, 
    FTOINT = 72, INTTOPTR = 73, PTRTOINT = 74, PTRTOPTR = 75, FEXT = 76, 
    FTRUNC = 77, BITCAST = 78, FUNCREF = 79, GLOBALREF = 80, LOCALREF = 81, 
    CONSTANT = 82, LABEL = 83, STRING = 84, ELLIPSIS = 85, MULTIPLY = 86, 
    ATTRIBUTE = 87, NULLPTR = 88, INT_NUMBER = 89, DECIMAL_NUMBER = 90, 
    WS = 91, IDENTIFIER = 92, STRING_LITERAL = 93
  };

  explicit LGIRGrammarLexer(antlr4::CharStream *input);

  ~LGIRGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

