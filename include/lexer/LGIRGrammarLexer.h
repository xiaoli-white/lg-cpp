
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
    CMP = 46, CONDITIONAL_JUMP = 47, PHI = 48, SWITCH = 49, INC = 50, DEC = 51, 
    NOT = 52, NEG = 53, ADD = 54, SUB = 55, MUL = 56, DIV = 57, MOD = 58, 
    AND = 59, OR = 60, XOR = 61, SHL = 62, SHR = 63, USHR = 64, ZEXT = 65, 
    SEXT = 66, TRUNC = 67, ITOF = 68, FTOI = 69, ITOP = 70, PTOI = 71, PTOP = 72, 
    FEXT = 73, FTRUNC = 74, FUNCREF = 75, GLOBALREF = 76, LOCALREF = 77, 
    CONSTANT = 78, LABEL = 79, STRING = 80, ELLIPSIS = 81, MULTIPLY = 82, 
    INT_NUMBER = 83, DECIMAL_NUMBER = 84, WS = 85, STRING_LITERAL = 86, 
    IDENTIFIER = 87
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

