
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LGIRGrammarLexer : public antlr4::Lexer {
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

