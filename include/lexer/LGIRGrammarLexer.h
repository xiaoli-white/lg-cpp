
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
    GLOBAL = 35, STRUCTURE = 36, FUNCTION = 37, NOP = 38, STACK_ALLOC = 39, 
    LOAD = 40, STORE = 41, ASM = 42, GOTO = 43, INVOKE = 44, RETURN = 45, 
    GETELEMENTPTR = 46, CMP = 47, CONDITIONAL_JUMP = 48, INC = 49, DEC = 50, 
    NOT = 51, NEG = 52, ADD = 53, SUB = 54, MUL = 55, DIV = 56, MOD = 57, 
    AND = 58, OR = 59, XOR = 60, SHL = 61, SHR = 62, USHR = 63, ZEXT = 64, 
    SEXT = 65, TRUNC = 66, ITOF = 67, FTOI = 68, ITOP = 69, PTOI = 70, PTOP = 71, 
    FEXT = 72, FTRUNC = 73, FUNCREF = 74, GLOBALREF = 75, LOCALREF = 76, 
    LABEL = 77, ELLIPSIS = 78, INT_NUMBER = 79, DECIMAL_NUMBER = 80, WS = 81, 
    STRING_LITERAL = 82, IDENTIFIER = 83
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

