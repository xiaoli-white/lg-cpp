
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LGIRGrammarLexer : public antlr4::Lexer {
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
    USHR = 61, ZEXT = 62, SEXT = 63, TRUNC = 64, ITOF = 65, FTOI = 66, FEXT = 67, 
    FTRUNC = 68, FUNCREF = 69, GLOBALREF = 70, LOCALREF = 71, LABEL = 72, 
    INT_NUMBER = 73, DECIMAL_NUMBER = 74, WS = 75, STRING_LITERAL = 76, 
    IDENTIFIER = 77
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

