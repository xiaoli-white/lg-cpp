
// Generated from LGIRGrammar.g4 by ANTLR 4.13.2


#include "lexer/LGIRGrammarListener.h"
#include "lexer/LGIRGrammarVisitor.h"

#include "lexer/LGIRGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LGIRGrammarParserStaticData final {
  LGIRGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LGIRGrammarParserStaticData(const LGIRGrammarParserStaticData&) = delete;
  LGIRGrammarParserStaticData(LGIRGrammarParserStaticData&&) = delete;
  LGIRGrammarParserStaticData& operator=(const LGIRGrammarParserStaticData&) = delete;
  LGIRGrammarParserStaticData& operator=(LGIRGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lgirgrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LGIRGrammarParserStaticData> lgirgrammarParserStaticData = nullptr;

void lgirgrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lgirgrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(lgirgrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LGIRGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "globalVariable", "structure", "fields", "field", "function", 
      "localVariables", "localVariable", "basicBlock", "statement", "nop", 
      "stackAlloc", "load", "store", "asm", "goto", "invoke", "return", 
      "setRegister", "getElementPointer", "cmp", "conditionalJump", "unaryOperates", 
      "binaryOperates", "typeCast", "type", "baseType", "integerType", "decimalType", 
      "arrayType", "voidType", "structureType", "functionReferenceType", 
      "types", "values", "value", "constant", "integerConstant", "decimalConstant", 
      "arrayConstant", "functionReference", "globalReference", "localReference", 
      "register", "registerName", "label", "condition", "unaryOperator", 
      "binaryOperator", "typeCastKind"
    },
    std::vector<std::string>{
      "", "'='", "'{'", "'}'", "','", "'('", "')'", "':'", "'to'", "'['", 
      "'x'", "']'", "'->'", "'%'", "'if_true'", "'if_false'", "'e'", "'ne'", 
      "'l'", "'le'", "'g'", "'ge'", "'i1'", "'i8'", "'u8'", "'i16'", "'u16'", 
      "'i32'", "'u32'", "'i64'", "'u64'", "'float'", "'double'", "'void'", 
      "'global'", "'structure'", "'function'", "'nop'", "'stack_alloc'", 
      "'load'", "'store'", "'asm'", "'goto'", "'invoke'", "'return'", "'getelementptr'", 
      "'cmp'", "'conditional_jump'", "'inc'", "'dec'", "'not'", "'neg'", 
      "'add'", "'sub'", "'mul'", "'div'", "'mod'", "'and'", "'or'", "'xor'", 
      "'shl'", "'shr'", "'ushr'", "'zext'", "'sext'", "'trunc'", "'itof'", 
      "'ftoi'", "'itop'", "'ptoi'", "'ptop'", "'fext'", "'ftrunc'", "'funcref'", 
      "'globalref'", "'localref'", "'label'", "'...'", "'*'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "I1", "I8", "U8", "I16", "U16", "I32", "U32", 
      "I64", "U64", "FLOAT", "DOUBLE", "VOID", "GLOBAL", "STRUCTURE", "FUNCTION", 
      "NOP", "STACK_ALLOC", "LOAD", "STORE", "ASM", "GOTO", "INVOKE", "RETURN", 
      "GETELEMENTPTR", "CMP", "CONDITIONAL_JUMP", "INC", "DEC", "NOT", "NEG", 
      "ADD", "SUB", "MUL", "DIV", "MOD", "AND", "OR", "XOR", "SHL", "SHR", 
      "USHR", "ZEXT", "SEXT", "TRUNC", "ITOF", "FTOI", "ITOP", "PTOI", "PTOP", 
      "FEXT", "FTRUNC", "FUNCREF", "GLOBALREF", "LOCALREF", "LABEL", "ELLIPSIS", 
      "MULTIPLY", "INT_NUMBER", "DECIMAL_NUMBER", "WS", "STRING_LITERAL", 
      "IDENTIFIER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,83,408,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,1,0,1,0,1,0,5,0,104,8,0,10,0,12,0,107,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,5,3,125,8,3,10,3,12,3,128,9,3,
  	1,3,3,3,131,8,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,5,5,147,8,5,10,5,12,5,150,9,5,1,5,1,5,1,6,1,6,1,6,5,6,157,8,6,10,6,
  	12,6,160,9,6,1,6,3,6,163,8,6,1,7,1,7,1,7,1,8,1,8,1,8,5,8,171,8,8,10,8,
  	12,8,174,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,3,9,191,8,9,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,16,1,16,1,16,3,16,223,8,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,17,1,17,3,17,234,8,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,4,19,246,8,19,11,19,12,19,247,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,25,1,25,5,25,289,8,25,10,25,12,25,292,9,25,1,26,1,26,
  	1,26,1,26,1,26,1,26,3,26,300,8,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,32,3,32,321,
  	8,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,5,33,330,8,33,10,33,12,33,333,
  	9,33,1,33,3,33,336,8,33,1,34,1,34,1,34,5,34,341,8,34,10,34,12,34,344,
  	9,34,1,34,3,34,347,8,34,1,35,1,35,1,35,1,35,1,35,3,35,354,8,35,1,36,1,
  	36,1,36,3,36,359,8,36,1,37,1,37,1,37,1,38,1,38,1,38,1,39,1,39,1,39,1,
  	39,1,39,5,39,372,8,39,10,39,12,39,375,9,39,1,39,3,39,378,8,39,1,39,1,
  	39,1,40,1,40,1,40,1,41,1,41,1,41,1,42,1,42,1,42,1,43,1,43,1,43,1,44,1,
  	44,1,44,1,45,1,45,1,45,1,46,1,46,1,47,1,47,1,48,1,48,1,49,1,49,1,49,0,
  	0,50,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,
  	92,94,96,98,0,7,1,0,22,30,1,0,31,32,2,0,79,79,83,83,1,0,14,21,1,0,48,
  	51,1,0,52,62,1,0,63,72,402,0,105,1,0,0,0,2,110,1,0,0,0,4,115,1,0,0,0,
  	6,130,1,0,0,0,8,132,1,0,0,0,10,135,1,0,0,0,12,162,1,0,0,0,14,164,1,0,
  	0,0,16,167,1,0,0,0,18,190,1,0,0,0,20,192,1,0,0,0,22,194,1,0,0,0,24,199,
  	1,0,0,0,26,204,1,0,0,0,28,208,1,0,0,0,30,216,1,0,0,0,32,222,1,0,0,0,34,
  	231,1,0,0,0,36,235,1,0,0,0,38,239,1,0,0,0,40,249,1,0,0,0,42,258,1,0,0,
  	0,44,267,1,0,0,0,46,272,1,0,0,0,48,279,1,0,0,0,50,286,1,0,0,0,52,299,
  	1,0,0,0,54,301,1,0,0,0,56,303,1,0,0,0,58,305,1,0,0,0,60,311,1,0,0,0,62,
  	313,1,0,0,0,64,316,1,0,0,0,66,335,1,0,0,0,68,346,1,0,0,0,70,353,1,0,0,
  	0,72,358,1,0,0,0,74,360,1,0,0,0,76,363,1,0,0,0,78,366,1,0,0,0,80,381,
  	1,0,0,0,82,384,1,0,0,0,84,387,1,0,0,0,86,390,1,0,0,0,88,393,1,0,0,0,90,
  	396,1,0,0,0,92,399,1,0,0,0,94,401,1,0,0,0,96,403,1,0,0,0,98,405,1,0,0,
  	0,100,104,3,2,1,0,101,104,3,4,2,0,102,104,3,10,5,0,103,100,1,0,0,0,103,
  	101,1,0,0,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,
  	0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,108,109,5,0,0,1,109,1,1,0,0,0,110,
  	111,5,34,0,0,111,112,5,83,0,0,112,113,5,1,0,0,113,114,3,72,36,0,114,3,
  	1,0,0,0,115,116,5,35,0,0,116,117,5,83,0,0,117,118,5,2,0,0,118,119,3,6,
  	3,0,119,120,5,3,0,0,120,5,1,0,0,0,121,126,3,8,4,0,122,123,5,4,0,0,123,
  	125,3,8,4,0,124,122,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,
  	0,0,0,127,131,1,0,0,0,128,126,1,0,0,0,129,131,1,0,0,0,130,121,1,0,0,0,
  	130,129,1,0,0,0,131,7,1,0,0,0,132,133,3,50,25,0,133,134,5,83,0,0,134,
  	9,1,0,0,0,135,136,5,36,0,0,136,137,3,50,25,0,137,138,5,83,0,0,138,139,
  	5,5,0,0,139,140,3,12,6,0,140,141,5,6,0,0,141,142,5,2,0,0,142,143,3,12,
  	6,0,143,144,5,3,0,0,144,148,5,2,0,0,145,147,3,16,8,0,146,145,1,0,0,0,
  	147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,1,0,0,0,150,148,
  	1,0,0,0,151,152,5,3,0,0,152,11,1,0,0,0,153,158,3,14,7,0,154,155,5,4,0,
  	0,155,157,3,14,7,0,156,154,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,
  	159,1,0,0,0,159,163,1,0,0,0,160,158,1,0,0,0,161,163,1,0,0,0,162,153,1,
  	0,0,0,162,161,1,0,0,0,163,13,1,0,0,0,164,165,3,50,25,0,165,166,5,83,0,
  	0,166,15,1,0,0,0,167,168,5,83,0,0,168,172,5,7,0,0,169,171,3,18,9,0,170,
  	169,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,17,1,
  	0,0,0,174,172,1,0,0,0,175,191,3,20,10,0,176,191,3,22,11,0,177,191,3,24,
  	12,0,178,191,3,26,13,0,179,191,3,28,14,0,180,191,3,30,15,0,181,191,3,
  	32,16,0,182,191,3,34,17,0,183,191,3,36,18,0,184,191,3,38,19,0,185,191,
  	3,40,20,0,186,191,3,42,21,0,187,191,3,44,22,0,188,191,3,46,23,0,189,191,
  	3,48,24,0,190,175,1,0,0,0,190,176,1,0,0,0,190,177,1,0,0,0,190,178,1,0,
  	0,0,190,179,1,0,0,0,190,180,1,0,0,0,190,181,1,0,0,0,190,182,1,0,0,0,190,
  	183,1,0,0,0,190,184,1,0,0,0,190,185,1,0,0,0,190,186,1,0,0,0,190,187,1,
  	0,0,0,190,188,1,0,0,0,190,189,1,0,0,0,191,19,1,0,0,0,192,193,5,37,0,0,
  	193,21,1,0,0,0,194,195,3,88,44,0,195,196,5,1,0,0,196,197,5,38,0,0,197,
  	198,3,70,35,0,198,23,1,0,0,0,199,200,3,88,44,0,200,201,5,1,0,0,201,202,
  	5,39,0,0,202,203,3,70,35,0,203,25,1,0,0,0,204,205,5,40,0,0,205,206,3,
  	70,35,0,206,207,3,70,35,0,207,27,1,0,0,0,208,209,5,41,0,0,209,210,5,82,
  	0,0,210,211,5,4,0,0,211,212,5,82,0,0,212,213,5,5,0,0,213,214,3,68,34,
  	0,214,215,5,6,0,0,215,29,1,0,0,0,216,217,5,42,0,0,217,218,3,90,45,0,218,
  	31,1,0,0,0,219,220,3,88,44,0,220,221,5,1,0,0,221,223,1,0,0,0,222,219,
  	1,0,0,0,222,223,1,0,0,0,223,224,1,0,0,0,224,225,5,43,0,0,225,226,3,50,
  	25,0,226,227,3,70,35,0,227,228,5,5,0,0,228,229,3,68,34,0,229,230,5,6,
  	0,0,230,33,1,0,0,0,231,233,5,44,0,0,232,234,3,70,35,0,233,232,1,0,0,0,
  	233,234,1,0,0,0,234,35,1,0,0,0,235,236,3,88,44,0,236,237,5,1,0,0,237,
  	238,3,70,35,0,238,37,1,0,0,0,239,240,3,88,44,0,240,241,5,1,0,0,241,242,
  	5,45,0,0,242,245,3,70,35,0,243,244,5,4,0,0,244,246,3,70,35,0,245,243,
  	1,0,0,0,246,247,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,39,1,0,0,
  	0,249,250,3,88,44,0,250,251,5,1,0,0,251,252,5,46,0,0,252,253,3,92,46,
  	0,253,254,5,4,0,0,254,255,3,70,35,0,255,256,5,4,0,0,256,257,3,70,35,0,
  	257,41,1,0,0,0,258,259,5,47,0,0,259,260,3,92,46,0,260,261,5,4,0,0,261,
  	262,3,70,35,0,262,263,5,4,0,0,263,264,3,70,35,0,264,265,5,4,0,0,265,266,
  	3,90,45,0,266,43,1,0,0,0,267,268,3,88,44,0,268,269,5,1,0,0,269,270,3,
  	94,47,0,270,271,3,70,35,0,271,45,1,0,0,0,272,273,3,88,44,0,273,274,5,
  	1,0,0,274,275,3,96,48,0,275,276,3,70,35,0,276,277,5,4,0,0,277,278,3,70,
  	35,0,278,47,1,0,0,0,279,280,3,88,44,0,280,281,5,1,0,0,281,282,3,98,49,
  	0,282,283,3,70,35,0,283,284,5,8,0,0,284,285,3,50,25,0,285,49,1,0,0,0,
  	286,290,3,52,26,0,287,289,5,78,0,0,288,287,1,0,0,0,289,292,1,0,0,0,290,
  	288,1,0,0,0,290,291,1,0,0,0,291,51,1,0,0,0,292,290,1,0,0,0,293,300,3,
  	54,27,0,294,300,3,56,28,0,295,300,3,58,29,0,296,300,3,60,30,0,297,300,
  	3,62,31,0,298,300,3,64,32,0,299,293,1,0,0,0,299,294,1,0,0,0,299,295,1,
  	0,0,0,299,296,1,0,0,0,299,297,1,0,0,0,299,298,1,0,0,0,300,53,1,0,0,0,
  	301,302,7,0,0,0,302,55,1,0,0,0,303,304,7,1,0,0,304,57,1,0,0,0,305,306,
  	5,9,0,0,306,307,5,79,0,0,307,308,5,10,0,0,308,309,3,50,25,0,309,310,5,
  	11,0,0,310,59,1,0,0,0,311,312,5,33,0,0,312,61,1,0,0,0,313,314,5,35,0,
  	0,314,315,5,83,0,0,315,63,1,0,0,0,316,317,5,5,0,0,317,320,3,66,33,0,318,
  	319,5,4,0,0,319,321,5,77,0,0,320,318,1,0,0,0,320,321,1,0,0,0,321,322,
  	1,0,0,0,322,323,5,6,0,0,323,324,5,12,0,0,324,325,3,50,25,0,325,65,1,0,
  	0,0,326,331,3,50,25,0,327,328,5,4,0,0,328,330,3,50,25,0,329,327,1,0,0,
  	0,330,333,1,0,0,0,331,329,1,0,0,0,331,332,1,0,0,0,332,336,1,0,0,0,333,
  	331,1,0,0,0,334,336,1,0,0,0,335,326,1,0,0,0,335,334,1,0,0,0,336,67,1,
  	0,0,0,337,342,3,70,35,0,338,339,5,4,0,0,339,341,3,70,35,0,340,338,1,0,
  	0,0,341,344,1,0,0,0,342,340,1,0,0,0,342,343,1,0,0,0,343,347,1,0,0,0,344,
  	342,1,0,0,0,345,347,1,0,0,0,346,337,1,0,0,0,346,345,1,0,0,0,347,69,1,
  	0,0,0,348,354,3,86,43,0,349,354,3,72,36,0,350,354,3,80,40,0,351,354,3,
  	82,41,0,352,354,3,84,42,0,353,348,1,0,0,0,353,349,1,0,0,0,353,350,1,0,
  	0,0,353,351,1,0,0,0,353,352,1,0,0,0,354,71,1,0,0,0,355,359,3,74,37,0,
  	356,359,3,76,38,0,357,359,3,78,39,0,358,355,1,0,0,0,358,356,1,0,0,0,358,
  	357,1,0,0,0,359,73,1,0,0,0,360,361,3,54,27,0,361,362,5,79,0,0,362,75,
  	1,0,0,0,363,364,3,56,28,0,364,365,5,80,0,0,365,77,1,0,0,0,366,367,3,58,
  	29,0,367,377,5,9,0,0,368,373,3,72,36,0,369,370,5,4,0,0,370,372,3,72,36,
  	0,371,369,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,0,373,374,1,0,0,0,374,
  	378,1,0,0,0,375,373,1,0,0,0,376,378,3,72,36,0,377,368,1,0,0,0,377,376,
  	1,0,0,0,378,379,1,0,0,0,379,380,5,11,0,0,380,79,1,0,0,0,381,382,5,73,
  	0,0,382,383,5,83,0,0,383,81,1,0,0,0,384,385,5,74,0,0,385,386,5,83,0,0,
  	386,83,1,0,0,0,387,388,5,75,0,0,388,389,5,83,0,0,389,85,1,0,0,0,390,391,
  	3,50,25,0,391,392,3,88,44,0,392,87,1,0,0,0,393,394,5,13,0,0,394,395,7,
  	2,0,0,395,89,1,0,0,0,396,397,5,76,0,0,397,398,5,83,0,0,398,91,1,0,0,0,
  	399,400,7,3,0,0,400,93,1,0,0,0,401,402,7,4,0,0,402,95,1,0,0,0,403,404,
  	7,5,0,0,404,97,1,0,0,0,405,406,7,6,0,0,406,99,1,0,0,0,23,103,105,126,
  	130,148,158,162,172,190,222,233,247,290,299,320,331,335,342,346,353,358,
  	373,377
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lgirgrammarParserStaticData = std::move(staticData);
}

}

LGIRGrammarParser::LGIRGrammarParser(TokenStream *input) : LGIRGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LGIRGrammarParser::LGIRGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LGIRGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lgirgrammarParserStaticData->atn, lgirgrammarParserStaticData->decisionToDFA, lgirgrammarParserStaticData->sharedContextCache, options);
}

LGIRGrammarParser::~LGIRGrammarParser() {
  delete _interpreter;
}

const atn::ATN& LGIRGrammarParser::getATN() const {
  return *lgirgrammarParserStaticData->atn;
}

std::string LGIRGrammarParser::getGrammarFileName() const {
  return "LGIRGrammar.g4";
}

const std::vector<std::string>& LGIRGrammarParser::getRuleNames() const {
  return lgirgrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& LGIRGrammarParser::getVocabulary() const {
  return lgirgrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LGIRGrammarParser::getSerializedATN() const {
  return lgirgrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

LGIRGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::ProgramContext::EOF() {
  return getToken(LGIRGrammarParser::EOF, 0);
}

std::vector<LGIRGrammarParser::GlobalVariableContext *> LGIRGrammarParser::ProgramContext::globalVariable() {
  return getRuleContexts<LGIRGrammarParser::GlobalVariableContext>();
}

LGIRGrammarParser::GlobalVariableContext* LGIRGrammarParser::ProgramContext::globalVariable(size_t i) {
  return getRuleContext<LGIRGrammarParser::GlobalVariableContext>(i);
}

std::vector<LGIRGrammarParser::StructureContext *> LGIRGrammarParser::ProgramContext::structure() {
  return getRuleContexts<LGIRGrammarParser::StructureContext>();
}

LGIRGrammarParser::StructureContext* LGIRGrammarParser::ProgramContext::structure(size_t i) {
  return getRuleContext<LGIRGrammarParser::StructureContext>(i);
}

std::vector<LGIRGrammarParser::FunctionContext *> LGIRGrammarParser::ProgramContext::function() {
  return getRuleContexts<LGIRGrammarParser::FunctionContext>();
}

LGIRGrammarParser::FunctionContext* LGIRGrammarParser::ProgramContext::function(size_t i) {
  return getRuleContext<LGIRGrammarParser::FunctionContext>(i);
}


size_t LGIRGrammarParser::ProgramContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleProgram;
}

void LGIRGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void LGIRGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any LGIRGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ProgramContext* LGIRGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LGIRGrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 120259084288) != 0)) {
      setState(103);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LGIRGrammarParser::GLOBAL: {
          setState(100);
          globalVariable();
          break;
        }

        case LGIRGrammarParser::STRUCTURE: {
          setState(101);
          structure();
          break;
        }

        case LGIRGrammarParser::FUNCTION: {
          setState(102);
          function();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(108);
    match(LGIRGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalVariableContext ------------------------------------------------------------------

LGIRGrammarParser::GlobalVariableContext::GlobalVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::GlobalVariableContext::GLOBAL() {
  return getToken(LGIRGrammarParser::GLOBAL, 0);
}

tree::TerminalNode* LGIRGrammarParser::GlobalVariableContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}

LGIRGrammarParser::ConstantContext* LGIRGrammarParser::GlobalVariableContext::constant() {
  return getRuleContext<LGIRGrammarParser::ConstantContext>(0);
}


size_t LGIRGrammarParser::GlobalVariableContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleGlobalVariable;
}

void LGIRGrammarParser::GlobalVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalVariable(this);
}

void LGIRGrammarParser::GlobalVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalVariable(this);
}


std::any LGIRGrammarParser::GlobalVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitGlobalVariable(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::GlobalVariableContext* LGIRGrammarParser::globalVariable() {
  GlobalVariableContext *_localctx = _tracker.createInstance<GlobalVariableContext>(_ctx, getState());
  enterRule(_localctx, 2, LGIRGrammarParser::RuleGlobalVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(LGIRGrammarParser::GLOBAL);
    setState(111);
    match(LGIRGrammarParser::IDENTIFIER);
    setState(112);
    match(LGIRGrammarParser::T__0);
    setState(113);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureContext ------------------------------------------------------------------

LGIRGrammarParser::StructureContext::StructureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::StructureContext::STRUCTURE() {
  return getToken(LGIRGrammarParser::STRUCTURE, 0);
}

tree::TerminalNode* LGIRGrammarParser::StructureContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}

LGIRGrammarParser::FieldsContext* LGIRGrammarParser::StructureContext::fields() {
  return getRuleContext<LGIRGrammarParser::FieldsContext>(0);
}


size_t LGIRGrammarParser::StructureContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleStructure;
}

void LGIRGrammarParser::StructureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure(this);
}

void LGIRGrammarParser::StructureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure(this);
}


std::any LGIRGrammarParser::StructureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitStructure(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::StructureContext* LGIRGrammarParser::structure() {
  StructureContext *_localctx = _tracker.createInstance<StructureContext>(_ctx, getState());
  enterRule(_localctx, 4, LGIRGrammarParser::RuleStructure);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(LGIRGrammarParser::STRUCTURE);
    setState(116);
    match(LGIRGrammarParser::IDENTIFIER);
    setState(117);
    match(LGIRGrammarParser::T__1);
    setState(118);
    fields();
    setState(119);
    match(LGIRGrammarParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldsContext ------------------------------------------------------------------

LGIRGrammarParser::FieldsContext::FieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LGIRGrammarParser::FieldContext *> LGIRGrammarParser::FieldsContext::field() {
  return getRuleContexts<LGIRGrammarParser::FieldContext>();
}

LGIRGrammarParser::FieldContext* LGIRGrammarParser::FieldsContext::field(size_t i) {
  return getRuleContext<LGIRGrammarParser::FieldContext>(i);
}


size_t LGIRGrammarParser::FieldsContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleFields;
}

void LGIRGrammarParser::FieldsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFields(this);
}

void LGIRGrammarParser::FieldsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFields(this);
}


std::any LGIRGrammarParser::FieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitFields(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::FieldsContext* LGIRGrammarParser::fields() {
  FieldsContext *_localctx = _tracker.createInstance<FieldsContext>(_ctx, getState());
  enterRule(_localctx, 6, LGIRGrammarParser::RuleFields);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::T__4:
      case LGIRGrammarParser::T__8:
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64:
      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE:
      case LGIRGrammarParser::VOID:
      case LGIRGrammarParser::STRUCTURE: {
        enterOuterAlt(_localctx, 1);
        setState(121);
        field();
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LGIRGrammarParser::T__3) {
          setState(122);
          match(LGIRGrammarParser::T__3);
          setState(123);
          field();
          setState(128);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case LGIRGrammarParser::T__2: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

LGIRGrammarParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::FieldContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::FieldContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::FieldContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleField;
}

void LGIRGrammarParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void LGIRGrammarParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


std::any LGIRGrammarParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::FieldContext* LGIRGrammarParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 8, LGIRGrammarParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    type();
    setState(133);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

LGIRGrammarParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::FunctionContext::FUNCTION() {
  return getToken(LGIRGrammarParser::FUNCTION, 0);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::FunctionContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::FunctionContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}

std::vector<LGIRGrammarParser::LocalVariablesContext *> LGIRGrammarParser::FunctionContext::localVariables() {
  return getRuleContexts<LGIRGrammarParser::LocalVariablesContext>();
}

LGIRGrammarParser::LocalVariablesContext* LGIRGrammarParser::FunctionContext::localVariables(size_t i) {
  return getRuleContext<LGIRGrammarParser::LocalVariablesContext>(i);
}

std::vector<LGIRGrammarParser::BasicBlockContext *> LGIRGrammarParser::FunctionContext::basicBlock() {
  return getRuleContexts<LGIRGrammarParser::BasicBlockContext>();
}

LGIRGrammarParser::BasicBlockContext* LGIRGrammarParser::FunctionContext::basicBlock(size_t i) {
  return getRuleContext<LGIRGrammarParser::BasicBlockContext>(i);
}


size_t LGIRGrammarParser::FunctionContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleFunction;
}

void LGIRGrammarParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void LGIRGrammarParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any LGIRGrammarParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::FunctionContext* LGIRGrammarParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 10, LGIRGrammarParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(LGIRGrammarParser::FUNCTION);
    setState(136);
    type();
    setState(137);
    match(LGIRGrammarParser::IDENTIFIER);
    setState(138);
    match(LGIRGrammarParser::T__4);
    setState(139);
    localVariables();
    setState(140);
    match(LGIRGrammarParser::T__5);
    setState(141);
    match(LGIRGrammarParser::T__1);
    setState(142);
    localVariables();
    setState(143);
    match(LGIRGrammarParser::T__2);
    setState(144);
    match(LGIRGrammarParser::T__1);
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LGIRGrammarParser::IDENTIFIER) {
      setState(145);
      basicBlock();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(LGIRGrammarParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariablesContext ------------------------------------------------------------------

LGIRGrammarParser::LocalVariablesContext::LocalVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LGIRGrammarParser::LocalVariableContext *> LGIRGrammarParser::LocalVariablesContext::localVariable() {
  return getRuleContexts<LGIRGrammarParser::LocalVariableContext>();
}

LGIRGrammarParser::LocalVariableContext* LGIRGrammarParser::LocalVariablesContext::localVariable(size_t i) {
  return getRuleContext<LGIRGrammarParser::LocalVariableContext>(i);
}


size_t LGIRGrammarParser::LocalVariablesContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleLocalVariables;
}

void LGIRGrammarParser::LocalVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariables(this);
}

void LGIRGrammarParser::LocalVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariables(this);
}


std::any LGIRGrammarParser::LocalVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitLocalVariables(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::LocalVariablesContext* LGIRGrammarParser::localVariables() {
  LocalVariablesContext *_localctx = _tracker.createInstance<LocalVariablesContext>(_ctx, getState());
  enterRule(_localctx, 12, LGIRGrammarParser::RuleLocalVariables);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::T__4:
      case LGIRGrammarParser::T__8:
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64:
      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE:
      case LGIRGrammarParser::VOID:
      case LGIRGrammarParser::STRUCTURE: {
        enterOuterAlt(_localctx, 1);
        setState(153);
        localVariable();
        setState(158);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LGIRGrammarParser::T__3) {
          setState(154);
          match(LGIRGrammarParser::T__3);
          setState(155);
          localVariable();
          setState(160);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case LGIRGrammarParser::T__2:
      case LGIRGrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableContext ------------------------------------------------------------------

LGIRGrammarParser::LocalVariableContext::LocalVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::LocalVariableContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::LocalVariableContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::LocalVariableContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleLocalVariable;
}

void LGIRGrammarParser::LocalVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariable(this);
}

void LGIRGrammarParser::LocalVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariable(this);
}


std::any LGIRGrammarParser::LocalVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitLocalVariable(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::LocalVariableContext* LGIRGrammarParser::localVariable() {
  LocalVariableContext *_localctx = _tracker.createInstance<LocalVariableContext>(_ctx, getState());
  enterRule(_localctx, 14, LGIRGrammarParser::RuleLocalVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    type();
    setState(165);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicBlockContext ------------------------------------------------------------------

LGIRGrammarParser::BasicBlockContext::BasicBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::BasicBlockContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}

std::vector<LGIRGrammarParser::StatementContext *> LGIRGrammarParser::BasicBlockContext::statement() {
  return getRuleContexts<LGIRGrammarParser::StatementContext>();
}

LGIRGrammarParser::StatementContext* LGIRGrammarParser::BasicBlockContext::statement(size_t i) {
  return getRuleContext<LGIRGrammarParser::StatementContext>(i);
}


size_t LGIRGrammarParser::BasicBlockContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleBasicBlock;
}

void LGIRGrammarParser::BasicBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicBlock(this);
}

void LGIRGrammarParser::BasicBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicBlock(this);
}


std::any LGIRGrammarParser::BasicBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitBasicBlock(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::BasicBlockContext* LGIRGrammarParser::basicBlock() {
  BasicBlockContext *_localctx = _tracker.createInstance<BasicBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, LGIRGrammarParser::RuleBasicBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(LGIRGrammarParser::IDENTIFIER);
    setState(168);
    match(LGIRGrammarParser::T__6);
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 174959787778048) != 0)) {
      setState(169);
      statement();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

LGIRGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::NopContext* LGIRGrammarParser::StatementContext::nop() {
  return getRuleContext<LGIRGrammarParser::NopContext>(0);
}

LGIRGrammarParser::StackAllocContext* LGIRGrammarParser::StatementContext::stackAlloc() {
  return getRuleContext<LGIRGrammarParser::StackAllocContext>(0);
}

LGIRGrammarParser::LoadContext* LGIRGrammarParser::StatementContext::load() {
  return getRuleContext<LGIRGrammarParser::LoadContext>(0);
}

LGIRGrammarParser::StoreContext* LGIRGrammarParser::StatementContext::store() {
  return getRuleContext<LGIRGrammarParser::StoreContext>(0);
}

LGIRGrammarParser::AsmContext* LGIRGrammarParser::StatementContext::asm_() {
  return getRuleContext<LGIRGrammarParser::AsmContext>(0);
}

LGIRGrammarParser::GotoContext* LGIRGrammarParser::StatementContext::goto_() {
  return getRuleContext<LGIRGrammarParser::GotoContext>(0);
}

LGIRGrammarParser::InvokeContext* LGIRGrammarParser::StatementContext::invoke() {
  return getRuleContext<LGIRGrammarParser::InvokeContext>(0);
}

LGIRGrammarParser::ReturnContext* LGIRGrammarParser::StatementContext::return_() {
  return getRuleContext<LGIRGrammarParser::ReturnContext>(0);
}

LGIRGrammarParser::SetRegisterContext* LGIRGrammarParser::StatementContext::setRegister() {
  return getRuleContext<LGIRGrammarParser::SetRegisterContext>(0);
}

LGIRGrammarParser::GetElementPointerContext* LGIRGrammarParser::StatementContext::getElementPointer() {
  return getRuleContext<LGIRGrammarParser::GetElementPointerContext>(0);
}

LGIRGrammarParser::CmpContext* LGIRGrammarParser::StatementContext::cmp() {
  return getRuleContext<LGIRGrammarParser::CmpContext>(0);
}

LGIRGrammarParser::ConditionalJumpContext* LGIRGrammarParser::StatementContext::conditionalJump() {
  return getRuleContext<LGIRGrammarParser::ConditionalJumpContext>(0);
}

LGIRGrammarParser::UnaryOperatesContext* LGIRGrammarParser::StatementContext::unaryOperates() {
  return getRuleContext<LGIRGrammarParser::UnaryOperatesContext>(0);
}

LGIRGrammarParser::BinaryOperatesContext* LGIRGrammarParser::StatementContext::binaryOperates() {
  return getRuleContext<LGIRGrammarParser::BinaryOperatesContext>(0);
}

LGIRGrammarParser::TypeCastContext* LGIRGrammarParser::StatementContext::typeCast() {
  return getRuleContext<LGIRGrammarParser::TypeCastContext>(0);
}


size_t LGIRGrammarParser::StatementContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleStatement;
}

void LGIRGrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void LGIRGrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any LGIRGrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::StatementContext* LGIRGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, LGIRGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      nop();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      stackAlloc();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      load();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(178);
      store();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(179);
      asm_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(180);
      goto_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(181);
      invoke();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(182);
      return_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(183);
      setRegister();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(184);
      getElementPointer();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(185);
      cmp();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(186);
      conditionalJump();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(187);
      unaryOperates();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(188);
      binaryOperates();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(189);
      typeCast();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NopContext ------------------------------------------------------------------

LGIRGrammarParser::NopContext::NopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::NopContext::NOP() {
  return getToken(LGIRGrammarParser::NOP, 0);
}


size_t LGIRGrammarParser::NopContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleNop;
}

void LGIRGrammarParser::NopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNop(this);
}

void LGIRGrammarParser::NopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNop(this);
}


std::any LGIRGrammarParser::NopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitNop(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::NopContext* LGIRGrammarParser::nop() {
  NopContext *_localctx = _tracker.createInstance<NopContext>(_ctx, getState());
  enterRule(_localctx, 20, LGIRGrammarParser::RuleNop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(LGIRGrammarParser::NOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StackAllocContext ------------------------------------------------------------------

LGIRGrammarParser::StackAllocContext::StackAllocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::StackAllocContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::StackAllocContext::STACK_ALLOC() {
  return getToken(LGIRGrammarParser::STACK_ALLOC, 0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::StackAllocContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}


size_t LGIRGrammarParser::StackAllocContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleStackAlloc;
}

void LGIRGrammarParser::StackAllocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStackAlloc(this);
}

void LGIRGrammarParser::StackAllocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStackAlloc(this);
}


std::any LGIRGrammarParser::StackAllocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitStackAlloc(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::StackAllocContext* LGIRGrammarParser::stackAlloc() {
  StackAllocContext *_localctx = _tracker.createInstance<StackAllocContext>(_ctx, getState());
  enterRule(_localctx, 22, LGIRGrammarParser::RuleStackAlloc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    registerName();
    setState(195);
    match(LGIRGrammarParser::T__0);
    setState(196);
    match(LGIRGrammarParser::STACK_ALLOC);
    setState(197);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadContext ------------------------------------------------------------------

LGIRGrammarParser::LoadContext::LoadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::LoadContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::LoadContext::LOAD() {
  return getToken(LGIRGrammarParser::LOAD, 0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::LoadContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}


size_t LGIRGrammarParser::LoadContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleLoad;
}

void LGIRGrammarParser::LoadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoad(this);
}

void LGIRGrammarParser::LoadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoad(this);
}


std::any LGIRGrammarParser::LoadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitLoad(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::LoadContext* LGIRGrammarParser::load() {
  LoadContext *_localctx = _tracker.createInstance<LoadContext>(_ctx, getState());
  enterRule(_localctx, 24, LGIRGrammarParser::RuleLoad);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    registerName();
    setState(200);
    match(LGIRGrammarParser::T__0);
    setState(201);
    match(LGIRGrammarParser::LOAD);
    setState(202);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StoreContext ------------------------------------------------------------------

LGIRGrammarParser::StoreContext::StoreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::StoreContext::STORE() {
  return getToken(LGIRGrammarParser::STORE, 0);
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::StoreContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::StoreContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}


size_t LGIRGrammarParser::StoreContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleStore;
}

void LGIRGrammarParser::StoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStore(this);
}

void LGIRGrammarParser::StoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStore(this);
}


std::any LGIRGrammarParser::StoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitStore(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::StoreContext* LGIRGrammarParser::store() {
  StoreContext *_localctx = _tracker.createInstance<StoreContext>(_ctx, getState());
  enterRule(_localctx, 26, LGIRGrammarParser::RuleStore);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(LGIRGrammarParser::STORE);
    setState(205);
    value();
    setState(206);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmContext ------------------------------------------------------------------

LGIRGrammarParser::AsmContext::AsmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::AsmContext::ASM() {
  return getToken(LGIRGrammarParser::ASM, 0);
}

std::vector<tree::TerminalNode *> LGIRGrammarParser::AsmContext::STRING_LITERAL() {
  return getTokens(LGIRGrammarParser::STRING_LITERAL);
}

tree::TerminalNode* LGIRGrammarParser::AsmContext::STRING_LITERAL(size_t i) {
  return getToken(LGIRGrammarParser::STRING_LITERAL, i);
}

LGIRGrammarParser::ValuesContext* LGIRGrammarParser::AsmContext::values() {
  return getRuleContext<LGIRGrammarParser::ValuesContext>(0);
}


size_t LGIRGrammarParser::AsmContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleAsm;
}

void LGIRGrammarParser::AsmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsm(this);
}

void LGIRGrammarParser::AsmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsm(this);
}


std::any LGIRGrammarParser::AsmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitAsm(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::AsmContext* LGIRGrammarParser::asm_() {
  AsmContext *_localctx = _tracker.createInstance<AsmContext>(_ctx, getState());
  enterRule(_localctx, 28, LGIRGrammarParser::RuleAsm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(LGIRGrammarParser::ASM);
    setState(209);
    match(LGIRGrammarParser::STRING_LITERAL);
    setState(210);
    match(LGIRGrammarParser::T__3);
    setState(211);
    match(LGIRGrammarParser::STRING_LITERAL);
    setState(212);
    match(LGIRGrammarParser::T__4);
    setState(213);
    values();
    setState(214);
    match(LGIRGrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoContext ------------------------------------------------------------------

LGIRGrammarParser::GotoContext::GotoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::GotoContext::GOTO() {
  return getToken(LGIRGrammarParser::GOTO, 0);
}

LGIRGrammarParser::LabelContext* LGIRGrammarParser::GotoContext::label() {
  return getRuleContext<LGIRGrammarParser::LabelContext>(0);
}


size_t LGIRGrammarParser::GotoContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleGoto;
}

void LGIRGrammarParser::GotoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGoto(this);
}

void LGIRGrammarParser::GotoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGoto(this);
}


std::any LGIRGrammarParser::GotoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitGoto(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::GotoContext* LGIRGrammarParser::goto_() {
  GotoContext *_localctx = _tracker.createInstance<GotoContext>(_ctx, getState());
  enterRule(_localctx, 30, LGIRGrammarParser::RuleGoto);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(LGIRGrammarParser::GOTO);
    setState(217);
    label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvokeContext ------------------------------------------------------------------

LGIRGrammarParser::InvokeContext::InvokeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::InvokeContext::INVOKE() {
  return getToken(LGIRGrammarParser::INVOKE, 0);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::InvokeContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::InvokeContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}

LGIRGrammarParser::ValuesContext* LGIRGrammarParser::InvokeContext::values() {
  return getRuleContext<LGIRGrammarParser::ValuesContext>(0);
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::InvokeContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}


size_t LGIRGrammarParser::InvokeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleInvoke;
}

void LGIRGrammarParser::InvokeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvoke(this);
}

void LGIRGrammarParser::InvokeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvoke(this);
}


std::any LGIRGrammarParser::InvokeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitInvoke(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::InvokeContext* LGIRGrammarParser::invoke() {
  InvokeContext *_localctx = _tracker.createInstance<InvokeContext>(_ctx, getState());
  enterRule(_localctx, 32, LGIRGrammarParser::RuleInvoke);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LGIRGrammarParser::T__12) {
      setState(219);
      registerName();
      setState(220);
      match(LGIRGrammarParser::T__0);
    }
    setState(224);
    match(LGIRGrammarParser::INVOKE);
    setState(225);
    type();
    setState(226);
    value();
    setState(227);
    match(LGIRGrammarParser::T__4);
    setState(228);
    values();
    setState(229);
    match(LGIRGrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

LGIRGrammarParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::ReturnContext::RETURN() {
  return getToken(LGIRGrammarParser::RETURN, 0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::ReturnContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}


size_t LGIRGrammarParser::ReturnContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleReturn;
}

void LGIRGrammarParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void LGIRGrammarParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any LGIRGrammarParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ReturnContext* LGIRGrammarParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 34, LGIRGrammarParser::RuleReturn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(LGIRGrammarParser::RETURN);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 51535413792) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 7) != 0)) {
      setState(232);
      value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetRegisterContext ------------------------------------------------------------------

LGIRGrammarParser::SetRegisterContext::SetRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::SetRegisterContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::SetRegisterContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}


size_t LGIRGrammarParser::SetRegisterContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleSetRegister;
}

void LGIRGrammarParser::SetRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetRegister(this);
}

void LGIRGrammarParser::SetRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetRegister(this);
}


std::any LGIRGrammarParser::SetRegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitSetRegister(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::SetRegisterContext* LGIRGrammarParser::setRegister() {
  SetRegisterContext *_localctx = _tracker.createInstance<SetRegisterContext>(_ctx, getState());
  enterRule(_localctx, 36, LGIRGrammarParser::RuleSetRegister);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    registerName();
    setState(236);
    match(LGIRGrammarParser::T__0);
    setState(237);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetElementPointerContext ------------------------------------------------------------------

LGIRGrammarParser::GetElementPointerContext::GetElementPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::GetElementPointerContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::GetElementPointerContext::GETELEMENTPTR() {
  return getToken(LGIRGrammarParser::GETELEMENTPTR, 0);
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::GetElementPointerContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::GetElementPointerContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}


size_t LGIRGrammarParser::GetElementPointerContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleGetElementPointer;
}

void LGIRGrammarParser::GetElementPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetElementPointer(this);
}

void LGIRGrammarParser::GetElementPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetElementPointer(this);
}


std::any LGIRGrammarParser::GetElementPointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitGetElementPointer(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::GetElementPointerContext* LGIRGrammarParser::getElementPointer() {
  GetElementPointerContext *_localctx = _tracker.createInstance<GetElementPointerContext>(_ctx, getState());
  enterRule(_localctx, 38, LGIRGrammarParser::RuleGetElementPointer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    registerName();
    setState(240);
    match(LGIRGrammarParser::T__0);
    setState(241);
    match(LGIRGrammarParser::GETELEMENTPTR);
    setState(242);
    value();
    setState(245); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(243);
      match(LGIRGrammarParser::T__3);
      setState(244);
      value();
      setState(247); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LGIRGrammarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmpContext ------------------------------------------------------------------

LGIRGrammarParser::CmpContext::CmpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::CmpContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::CmpContext::CMP() {
  return getToken(LGIRGrammarParser::CMP, 0);
}

LGIRGrammarParser::ConditionContext* LGIRGrammarParser::CmpContext::condition() {
  return getRuleContext<LGIRGrammarParser::ConditionContext>(0);
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::CmpContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::CmpContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}


size_t LGIRGrammarParser::CmpContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleCmp;
}

void LGIRGrammarParser::CmpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmp(this);
}

void LGIRGrammarParser::CmpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmp(this);
}


std::any LGIRGrammarParser::CmpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitCmp(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::CmpContext* LGIRGrammarParser::cmp() {
  CmpContext *_localctx = _tracker.createInstance<CmpContext>(_ctx, getState());
  enterRule(_localctx, 40, LGIRGrammarParser::RuleCmp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    registerName();
    setState(250);
    match(LGIRGrammarParser::T__0);
    setState(251);
    match(LGIRGrammarParser::CMP);
    setState(252);
    condition();
    setState(253);
    match(LGIRGrammarParser::T__3);
    setState(254);
    value();
    setState(255);
    match(LGIRGrammarParser::T__3);
    setState(256);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalJumpContext ------------------------------------------------------------------

LGIRGrammarParser::ConditionalJumpContext::ConditionalJumpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::ConditionalJumpContext::CONDITIONAL_JUMP() {
  return getToken(LGIRGrammarParser::CONDITIONAL_JUMP, 0);
}

LGIRGrammarParser::ConditionContext* LGIRGrammarParser::ConditionalJumpContext::condition() {
  return getRuleContext<LGIRGrammarParser::ConditionContext>(0);
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::ConditionalJumpContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::ConditionalJumpContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}

LGIRGrammarParser::LabelContext* LGIRGrammarParser::ConditionalJumpContext::label() {
  return getRuleContext<LGIRGrammarParser::LabelContext>(0);
}


size_t LGIRGrammarParser::ConditionalJumpContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleConditionalJump;
}

void LGIRGrammarParser::ConditionalJumpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalJump(this);
}

void LGIRGrammarParser::ConditionalJumpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalJump(this);
}


std::any LGIRGrammarParser::ConditionalJumpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitConditionalJump(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ConditionalJumpContext* LGIRGrammarParser::conditionalJump() {
  ConditionalJumpContext *_localctx = _tracker.createInstance<ConditionalJumpContext>(_ctx, getState());
  enterRule(_localctx, 42, LGIRGrammarParser::RuleConditionalJump);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(LGIRGrammarParser::CONDITIONAL_JUMP);
    setState(259);
    condition();
    setState(260);
    match(LGIRGrammarParser::T__3);
    setState(261);
    value();
    setState(262);
    match(LGIRGrammarParser::T__3);
    setState(263);
    value();
    setState(264);
    match(LGIRGrammarParser::T__3);
    setState(265);
    label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatesContext ------------------------------------------------------------------

LGIRGrammarParser::UnaryOperatesContext::UnaryOperatesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::UnaryOperatesContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

LGIRGrammarParser::UnaryOperatorContext* LGIRGrammarParser::UnaryOperatesContext::unaryOperator() {
  return getRuleContext<LGIRGrammarParser::UnaryOperatorContext>(0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::UnaryOperatesContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}


size_t LGIRGrammarParser::UnaryOperatesContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleUnaryOperates;
}

void LGIRGrammarParser::UnaryOperatesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperates(this);
}

void LGIRGrammarParser::UnaryOperatesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperates(this);
}


std::any LGIRGrammarParser::UnaryOperatesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitUnaryOperates(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::UnaryOperatesContext* LGIRGrammarParser::unaryOperates() {
  UnaryOperatesContext *_localctx = _tracker.createInstance<UnaryOperatesContext>(_ctx, getState());
  enterRule(_localctx, 44, LGIRGrammarParser::RuleUnaryOperates);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    registerName();
    setState(268);
    match(LGIRGrammarParser::T__0);
    setState(269);
    unaryOperator();
    setState(270);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatesContext ------------------------------------------------------------------

LGIRGrammarParser::BinaryOperatesContext::BinaryOperatesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::BinaryOperatesContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

LGIRGrammarParser::BinaryOperatorContext* LGIRGrammarParser::BinaryOperatesContext::binaryOperator() {
  return getRuleContext<LGIRGrammarParser::BinaryOperatorContext>(0);
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::BinaryOperatesContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::BinaryOperatesContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}


size_t LGIRGrammarParser::BinaryOperatesContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleBinaryOperates;
}

void LGIRGrammarParser::BinaryOperatesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperates(this);
}

void LGIRGrammarParser::BinaryOperatesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperates(this);
}


std::any LGIRGrammarParser::BinaryOperatesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitBinaryOperates(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::BinaryOperatesContext* LGIRGrammarParser::binaryOperates() {
  BinaryOperatesContext *_localctx = _tracker.createInstance<BinaryOperatesContext>(_ctx, getState());
  enterRule(_localctx, 46, LGIRGrammarParser::RuleBinaryOperates);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    registerName();
    setState(273);
    match(LGIRGrammarParser::T__0);
    setState(274);
    binaryOperator();
    setState(275);
    value();
    setState(276);
    match(LGIRGrammarParser::T__3);
    setState(277);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCastContext ------------------------------------------------------------------

LGIRGrammarParser::TypeCastContext::TypeCastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::TypeCastContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}

LGIRGrammarParser::TypeCastKindContext* LGIRGrammarParser::TypeCastContext::typeCastKind() {
  return getRuleContext<LGIRGrammarParser::TypeCastKindContext>(0);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::TypeCastContext::value() {
  return getRuleContext<LGIRGrammarParser::ValueContext>(0);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::TypeCastContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}


size_t LGIRGrammarParser::TypeCastContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleTypeCast;
}

void LGIRGrammarParser::TypeCastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeCast(this);
}

void LGIRGrammarParser::TypeCastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeCast(this);
}


std::any LGIRGrammarParser::TypeCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitTypeCast(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::TypeCastContext* LGIRGrammarParser::typeCast() {
  TypeCastContext *_localctx = _tracker.createInstance<TypeCastContext>(_ctx, getState());
  enterRule(_localctx, 48, LGIRGrammarParser::RuleTypeCast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    registerName();
    setState(280);
    match(LGIRGrammarParser::T__0);
    setState(281);
    typeCastKind();
    setState(282);
    value();
    setState(283);
    match(LGIRGrammarParser::T__7);
    setState(284);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

LGIRGrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::BaseTypeContext* LGIRGrammarParser::TypeContext::baseType() {
  return getRuleContext<LGIRGrammarParser::BaseTypeContext>(0);
}

std::vector<tree::TerminalNode *> LGIRGrammarParser::TypeContext::MULTIPLY() {
  return getTokens(LGIRGrammarParser::MULTIPLY);
}

tree::TerminalNode* LGIRGrammarParser::TypeContext::MULTIPLY(size_t i) {
  return getToken(LGIRGrammarParser::MULTIPLY, i);
}


size_t LGIRGrammarParser::TypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleType;
}

void LGIRGrammarParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void LGIRGrammarParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any LGIRGrammarParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 50, LGIRGrammarParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(286);
    baseType();
    setState(290);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(287);
        match(LGIRGrammarParser::MULTIPLY); 
      }
      setState(292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

LGIRGrammarParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::IntegerTypeContext* LGIRGrammarParser::BaseTypeContext::integerType() {
  return getRuleContext<LGIRGrammarParser::IntegerTypeContext>(0);
}

LGIRGrammarParser::DecimalTypeContext* LGIRGrammarParser::BaseTypeContext::decimalType() {
  return getRuleContext<LGIRGrammarParser::DecimalTypeContext>(0);
}

LGIRGrammarParser::ArrayTypeContext* LGIRGrammarParser::BaseTypeContext::arrayType() {
  return getRuleContext<LGIRGrammarParser::ArrayTypeContext>(0);
}

LGIRGrammarParser::VoidTypeContext* LGIRGrammarParser::BaseTypeContext::voidType() {
  return getRuleContext<LGIRGrammarParser::VoidTypeContext>(0);
}

LGIRGrammarParser::StructureTypeContext* LGIRGrammarParser::BaseTypeContext::structureType() {
  return getRuleContext<LGIRGrammarParser::StructureTypeContext>(0);
}

LGIRGrammarParser::FunctionReferenceTypeContext* LGIRGrammarParser::BaseTypeContext::functionReferenceType() {
  return getRuleContext<LGIRGrammarParser::FunctionReferenceTypeContext>(0);
}


size_t LGIRGrammarParser::BaseTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleBaseType;
}

void LGIRGrammarParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void LGIRGrammarParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}


std::any LGIRGrammarParser::BaseTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitBaseType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::BaseTypeContext* LGIRGrammarParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, LGIRGrammarParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64: {
        enterOuterAlt(_localctx, 1);
        setState(293);
        integerType();
        break;
      }

      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(294);
        decimalType();
        break;
      }

      case LGIRGrammarParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(295);
        arrayType();
        break;
      }

      case LGIRGrammarParser::VOID: {
        enterOuterAlt(_localctx, 4);
        setState(296);
        voidType();
        break;
      }

      case LGIRGrammarParser::STRUCTURE: {
        enterOuterAlt(_localctx, 5);
        setState(297);
        structureType();
        break;
      }

      case LGIRGrammarParser::T__4: {
        enterOuterAlt(_localctx, 6);
        setState(298);
        functionReferenceType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerTypeContext ------------------------------------------------------------------

LGIRGrammarParser::IntegerTypeContext::IntegerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::I1() {
  return getToken(LGIRGrammarParser::I1, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::I8() {
  return getToken(LGIRGrammarParser::I8, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::U8() {
  return getToken(LGIRGrammarParser::U8, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::I16() {
  return getToken(LGIRGrammarParser::I16, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::U16() {
  return getToken(LGIRGrammarParser::U16, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::I32() {
  return getToken(LGIRGrammarParser::I32, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::U32() {
  return getToken(LGIRGrammarParser::U32, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::I64() {
  return getToken(LGIRGrammarParser::I64, 0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerTypeContext::U64() {
  return getToken(LGIRGrammarParser::U64, 0);
}


size_t LGIRGrammarParser::IntegerTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleIntegerType;
}

void LGIRGrammarParser::IntegerTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerType(this);
}

void LGIRGrammarParser::IntegerTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerType(this);
}


std::any LGIRGrammarParser::IntegerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitIntegerType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::IntegerTypeContext* LGIRGrammarParser::integerType() {
  IntegerTypeContext *_localctx = _tracker.createInstance<IntegerTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, LGIRGrammarParser::RuleIntegerType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2143289344) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalTypeContext ------------------------------------------------------------------

LGIRGrammarParser::DecimalTypeContext::DecimalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::DecimalTypeContext::FLOAT() {
  return getToken(LGIRGrammarParser::FLOAT, 0);
}

tree::TerminalNode* LGIRGrammarParser::DecimalTypeContext::DOUBLE() {
  return getToken(LGIRGrammarParser::DOUBLE, 0);
}


size_t LGIRGrammarParser::DecimalTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleDecimalType;
}

void LGIRGrammarParser::DecimalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalType(this);
}

void LGIRGrammarParser::DecimalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalType(this);
}


std::any LGIRGrammarParser::DecimalTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitDecimalType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::DecimalTypeContext* LGIRGrammarParser::decimalType() {
  DecimalTypeContext *_localctx = _tracker.createInstance<DecimalTypeContext>(_ctx, getState());
  enterRule(_localctx, 56, LGIRGrammarParser::RuleDecimalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _la = _input->LA(1);
    if (!(_la == LGIRGrammarParser::FLOAT

    || _la == LGIRGrammarParser::DOUBLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

LGIRGrammarParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::ArrayTypeContext::INT_NUMBER() {
  return getToken(LGIRGrammarParser::INT_NUMBER, 0);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::ArrayTypeContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}


size_t LGIRGrammarParser::ArrayTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleArrayType;
}

void LGIRGrammarParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void LGIRGrammarParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


std::any LGIRGrammarParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ArrayTypeContext* LGIRGrammarParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 58, LGIRGrammarParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(LGIRGrammarParser::T__8);
    setState(306);
    match(LGIRGrammarParser::INT_NUMBER);
    setState(307);
    match(LGIRGrammarParser::T__9);
    setState(308);
    type();
    setState(309);
    match(LGIRGrammarParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VoidTypeContext ------------------------------------------------------------------

LGIRGrammarParser::VoidTypeContext::VoidTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::VoidTypeContext::VOID() {
  return getToken(LGIRGrammarParser::VOID, 0);
}


size_t LGIRGrammarParser::VoidTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleVoidType;
}

void LGIRGrammarParser::VoidTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoidType(this);
}

void LGIRGrammarParser::VoidTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoidType(this);
}


std::any LGIRGrammarParser::VoidTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitVoidType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::VoidTypeContext* LGIRGrammarParser::voidType() {
  VoidTypeContext *_localctx = _tracker.createInstance<VoidTypeContext>(_ctx, getState());
  enterRule(_localctx, 60, LGIRGrammarParser::RuleVoidType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(LGIRGrammarParser::VOID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureTypeContext ------------------------------------------------------------------

LGIRGrammarParser::StructureTypeContext::StructureTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::StructureTypeContext::STRUCTURE() {
  return getToken(LGIRGrammarParser::STRUCTURE, 0);
}

tree::TerminalNode* LGIRGrammarParser::StructureTypeContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::StructureTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleStructureType;
}

void LGIRGrammarParser::StructureTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureType(this);
}

void LGIRGrammarParser::StructureTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureType(this);
}


std::any LGIRGrammarParser::StructureTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitStructureType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::StructureTypeContext* LGIRGrammarParser::structureType() {
  StructureTypeContext *_localctx = _tracker.createInstance<StructureTypeContext>(_ctx, getState());
  enterRule(_localctx, 62, LGIRGrammarParser::RuleStructureType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(LGIRGrammarParser::STRUCTURE);
    setState(314);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReferenceTypeContext ------------------------------------------------------------------

LGIRGrammarParser::FunctionReferenceTypeContext::FunctionReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::TypesContext* LGIRGrammarParser::FunctionReferenceTypeContext::types() {
  return getRuleContext<LGIRGrammarParser::TypesContext>(0);
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::FunctionReferenceTypeContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::FunctionReferenceTypeContext::ELLIPSIS() {
  return getToken(LGIRGrammarParser::ELLIPSIS, 0);
}


size_t LGIRGrammarParser::FunctionReferenceTypeContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleFunctionReferenceType;
}

void LGIRGrammarParser::FunctionReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReferenceType(this);
}

void LGIRGrammarParser::FunctionReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReferenceType(this);
}


std::any LGIRGrammarParser::FunctionReferenceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionReferenceType(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::FunctionReferenceTypeContext* LGIRGrammarParser::functionReferenceType() {
  FunctionReferenceTypeContext *_localctx = _tracker.createInstance<FunctionReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 64, LGIRGrammarParser::RuleFunctionReferenceType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(LGIRGrammarParser::T__4);
    setState(317);
    types();
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LGIRGrammarParser::T__3) {
      setState(318);
      match(LGIRGrammarParser::T__3);
      setState(319);
      match(LGIRGrammarParser::ELLIPSIS);
    }
    setState(322);
    match(LGIRGrammarParser::T__5);
    setState(323);
    match(LGIRGrammarParser::T__11);
    setState(324);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesContext ------------------------------------------------------------------

LGIRGrammarParser::TypesContext::TypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LGIRGrammarParser::TypeContext *> LGIRGrammarParser::TypesContext::type() {
  return getRuleContexts<LGIRGrammarParser::TypeContext>();
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::TypesContext::type(size_t i) {
  return getRuleContext<LGIRGrammarParser::TypeContext>(i);
}


size_t LGIRGrammarParser::TypesContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleTypes;
}

void LGIRGrammarParser::TypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypes(this);
}

void LGIRGrammarParser::TypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypes(this);
}


std::any LGIRGrammarParser::TypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitTypes(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::TypesContext* LGIRGrammarParser::types() {
  TypesContext *_localctx = _tracker.createInstance<TypesContext>(_ctx, getState());
  enterRule(_localctx, 66, LGIRGrammarParser::RuleTypes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::T__4:
      case LGIRGrammarParser::T__8:
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64:
      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE:
      case LGIRGrammarParser::VOID:
      case LGIRGrammarParser::STRUCTURE: {
        enterOuterAlt(_localctx, 1);
        setState(326);
        type();
        setState(331);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(327);
            match(LGIRGrammarParser::T__3);
            setState(328);
            type(); 
          }
          setState(333);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
        }
        break;
      }

      case LGIRGrammarParser::T__3:
      case LGIRGrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuesContext ------------------------------------------------------------------

LGIRGrammarParser::ValuesContext::ValuesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LGIRGrammarParser::ValueContext *> LGIRGrammarParser::ValuesContext::value() {
  return getRuleContexts<LGIRGrammarParser::ValueContext>();
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::ValuesContext::value(size_t i) {
  return getRuleContext<LGIRGrammarParser::ValueContext>(i);
}


size_t LGIRGrammarParser::ValuesContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleValues;
}

void LGIRGrammarParser::ValuesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValues(this);
}

void LGIRGrammarParser::ValuesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValues(this);
}


std::any LGIRGrammarParser::ValuesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitValues(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ValuesContext* LGIRGrammarParser::values() {
  ValuesContext *_localctx = _tracker.createInstance<ValuesContext>(_ctx, getState());
  enterRule(_localctx, 68, LGIRGrammarParser::RuleValues);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::T__4:
      case LGIRGrammarParser::T__8:
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64:
      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE:
      case LGIRGrammarParser::VOID:
      case LGIRGrammarParser::STRUCTURE:
      case LGIRGrammarParser::FUNCREF:
      case LGIRGrammarParser::GLOBALREF:
      case LGIRGrammarParser::LOCALREF: {
        enterOuterAlt(_localctx, 1);
        setState(337);
        value();
        setState(342);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LGIRGrammarParser::T__3) {
          setState(338);
          match(LGIRGrammarParser::T__3);
          setState(339);
          value();
          setState(344);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case LGIRGrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

LGIRGrammarParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::RegisterContext* LGIRGrammarParser::ValueContext::register_() {
  return getRuleContext<LGIRGrammarParser::RegisterContext>(0);
}

LGIRGrammarParser::ConstantContext* LGIRGrammarParser::ValueContext::constant() {
  return getRuleContext<LGIRGrammarParser::ConstantContext>(0);
}

LGIRGrammarParser::FunctionReferenceContext* LGIRGrammarParser::ValueContext::functionReference() {
  return getRuleContext<LGIRGrammarParser::FunctionReferenceContext>(0);
}

LGIRGrammarParser::GlobalReferenceContext* LGIRGrammarParser::ValueContext::globalReference() {
  return getRuleContext<LGIRGrammarParser::GlobalReferenceContext>(0);
}

LGIRGrammarParser::LocalReferenceContext* LGIRGrammarParser::ValueContext::localReference() {
  return getRuleContext<LGIRGrammarParser::LocalReferenceContext>(0);
}


size_t LGIRGrammarParser::ValueContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleValue;
}

void LGIRGrammarParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void LGIRGrammarParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any LGIRGrammarParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ValueContext* LGIRGrammarParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 70, LGIRGrammarParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(353);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(348);
      register_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(349);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(350);
      functionReference();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(351);
      globalReference();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(352);
      localReference();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

LGIRGrammarParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::IntegerConstantContext* LGIRGrammarParser::ConstantContext::integerConstant() {
  return getRuleContext<LGIRGrammarParser::IntegerConstantContext>(0);
}

LGIRGrammarParser::DecimalConstantContext* LGIRGrammarParser::ConstantContext::decimalConstant() {
  return getRuleContext<LGIRGrammarParser::DecimalConstantContext>(0);
}

LGIRGrammarParser::ArrayConstantContext* LGIRGrammarParser::ConstantContext::arrayConstant() {
  return getRuleContext<LGIRGrammarParser::ArrayConstantContext>(0);
}


size_t LGIRGrammarParser::ConstantContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleConstant;
}

void LGIRGrammarParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void LGIRGrammarParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any LGIRGrammarParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ConstantContext* LGIRGrammarParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 72, LGIRGrammarParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LGIRGrammarParser::I1:
      case LGIRGrammarParser::I8:
      case LGIRGrammarParser::U8:
      case LGIRGrammarParser::I16:
      case LGIRGrammarParser::U16:
      case LGIRGrammarParser::I32:
      case LGIRGrammarParser::U32:
      case LGIRGrammarParser::I64:
      case LGIRGrammarParser::U64: {
        enterOuterAlt(_localctx, 1);
        setState(355);
        integerConstant();
        break;
      }

      case LGIRGrammarParser::FLOAT:
      case LGIRGrammarParser::DOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        decimalConstant();
        break;
      }

      case LGIRGrammarParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(357);
        arrayConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext ------------------------------------------------------------------

LGIRGrammarParser::IntegerConstantContext::IntegerConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::IntegerTypeContext* LGIRGrammarParser::IntegerConstantContext::integerType() {
  return getRuleContext<LGIRGrammarParser::IntegerTypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::IntegerConstantContext::INT_NUMBER() {
  return getToken(LGIRGrammarParser::INT_NUMBER, 0);
}


size_t LGIRGrammarParser::IntegerConstantContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleIntegerConstant;
}

void LGIRGrammarParser::IntegerConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerConstant(this);
}

void LGIRGrammarParser::IntegerConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerConstant(this);
}


std::any LGIRGrammarParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::IntegerConstantContext* LGIRGrammarParser::integerConstant() {
  IntegerConstantContext *_localctx = _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 74, LGIRGrammarParser::RuleIntegerConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    integerType();
    setState(361);
    match(LGIRGrammarParser::INT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalConstantContext ------------------------------------------------------------------

LGIRGrammarParser::DecimalConstantContext::DecimalConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::DecimalTypeContext* LGIRGrammarParser::DecimalConstantContext::decimalType() {
  return getRuleContext<LGIRGrammarParser::DecimalTypeContext>(0);
}

tree::TerminalNode* LGIRGrammarParser::DecimalConstantContext::DECIMAL_NUMBER() {
  return getToken(LGIRGrammarParser::DECIMAL_NUMBER, 0);
}


size_t LGIRGrammarParser::DecimalConstantContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleDecimalConstant;
}

void LGIRGrammarParser::DecimalConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalConstant(this);
}

void LGIRGrammarParser::DecimalConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalConstant(this);
}


std::any LGIRGrammarParser::DecimalConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitDecimalConstant(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::DecimalConstantContext* LGIRGrammarParser::decimalConstant() {
  DecimalConstantContext *_localctx = _tracker.createInstance<DecimalConstantContext>(_ctx, getState());
  enterRule(_localctx, 76, LGIRGrammarParser::RuleDecimalConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    decimalType();
    setState(364);
    match(LGIRGrammarParser::DECIMAL_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayConstantContext ------------------------------------------------------------------

LGIRGrammarParser::ArrayConstantContext::ArrayConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::ArrayTypeContext* LGIRGrammarParser::ArrayConstantContext::arrayType() {
  return getRuleContext<LGIRGrammarParser::ArrayTypeContext>(0);
}

std::vector<LGIRGrammarParser::ConstantContext *> LGIRGrammarParser::ArrayConstantContext::constant() {
  return getRuleContexts<LGIRGrammarParser::ConstantContext>();
}

LGIRGrammarParser::ConstantContext* LGIRGrammarParser::ArrayConstantContext::constant(size_t i) {
  return getRuleContext<LGIRGrammarParser::ConstantContext>(i);
}


size_t LGIRGrammarParser::ArrayConstantContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleArrayConstant;
}

void LGIRGrammarParser::ArrayConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayConstant(this);
}

void LGIRGrammarParser::ArrayConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayConstant(this);
}


std::any LGIRGrammarParser::ArrayConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitArrayConstant(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ArrayConstantContext* LGIRGrammarParser::arrayConstant() {
  ArrayConstantContext *_localctx = _tracker.createInstance<ArrayConstantContext>(_ctx, getState());
  enterRule(_localctx, 78, LGIRGrammarParser::RuleArrayConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    arrayType();
    setState(367);
    match(LGIRGrammarParser::T__8);
    setState(377);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(368);
      constant();
      setState(373);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LGIRGrammarParser::T__3) {
        setState(369);
        match(LGIRGrammarParser::T__3);
        setState(370);
        constant();
        setState(375);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      setState(376);
      constant();
      break;
    }

    default:
      break;
    }
    setState(379);
    match(LGIRGrammarParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReferenceContext ------------------------------------------------------------------

LGIRGrammarParser::FunctionReferenceContext::FunctionReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::FunctionReferenceContext::FUNCREF() {
  return getToken(LGIRGrammarParser::FUNCREF, 0);
}

tree::TerminalNode* LGIRGrammarParser::FunctionReferenceContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::FunctionReferenceContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleFunctionReference;
}

void LGIRGrammarParser::FunctionReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReference(this);
}

void LGIRGrammarParser::FunctionReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReference(this);
}


std::any LGIRGrammarParser::FunctionReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionReference(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::FunctionReferenceContext* LGIRGrammarParser::functionReference() {
  FunctionReferenceContext *_localctx = _tracker.createInstance<FunctionReferenceContext>(_ctx, getState());
  enterRule(_localctx, 80, LGIRGrammarParser::RuleFunctionReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(LGIRGrammarParser::FUNCREF);
    setState(382);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalReferenceContext ------------------------------------------------------------------

LGIRGrammarParser::GlobalReferenceContext::GlobalReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::GlobalReferenceContext::GLOBALREF() {
  return getToken(LGIRGrammarParser::GLOBALREF, 0);
}

tree::TerminalNode* LGIRGrammarParser::GlobalReferenceContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::GlobalReferenceContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleGlobalReference;
}

void LGIRGrammarParser::GlobalReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalReference(this);
}

void LGIRGrammarParser::GlobalReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalReference(this);
}


std::any LGIRGrammarParser::GlobalReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitGlobalReference(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::GlobalReferenceContext* LGIRGrammarParser::globalReference() {
  GlobalReferenceContext *_localctx = _tracker.createInstance<GlobalReferenceContext>(_ctx, getState());
  enterRule(_localctx, 82, LGIRGrammarParser::RuleGlobalReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(LGIRGrammarParser::GLOBALREF);
    setState(385);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalReferenceContext ------------------------------------------------------------------

LGIRGrammarParser::LocalReferenceContext::LocalReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::LocalReferenceContext::LOCALREF() {
  return getToken(LGIRGrammarParser::LOCALREF, 0);
}

tree::TerminalNode* LGIRGrammarParser::LocalReferenceContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::LocalReferenceContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleLocalReference;
}

void LGIRGrammarParser::LocalReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalReference(this);
}

void LGIRGrammarParser::LocalReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalReference(this);
}


std::any LGIRGrammarParser::LocalReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitLocalReference(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::LocalReferenceContext* LGIRGrammarParser::localReference() {
  LocalReferenceContext *_localctx = _tracker.createInstance<LocalReferenceContext>(_ctx, getState());
  enterRule(_localctx, 84, LGIRGrammarParser::RuleLocalReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    match(LGIRGrammarParser::LOCALREF);
    setState(388);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterContext ------------------------------------------------------------------

LGIRGrammarParser::RegisterContext::RegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LGIRGrammarParser::TypeContext* LGIRGrammarParser::RegisterContext::type() {
  return getRuleContext<LGIRGrammarParser::TypeContext>(0);
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::RegisterContext::registerName() {
  return getRuleContext<LGIRGrammarParser::RegisterNameContext>(0);
}


size_t LGIRGrammarParser::RegisterContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleRegister;
}

void LGIRGrammarParser::RegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegister(this);
}

void LGIRGrammarParser::RegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegister(this);
}


std::any LGIRGrammarParser::RegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitRegister(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::RegisterContext* LGIRGrammarParser::register_() {
  RegisterContext *_localctx = _tracker.createInstance<RegisterContext>(_ctx, getState());
  enterRule(_localctx, 86, LGIRGrammarParser::RuleRegister);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    type();
    setState(391);
    registerName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterNameContext ------------------------------------------------------------------

LGIRGrammarParser::RegisterNameContext::RegisterNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::RegisterNameContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* LGIRGrammarParser::RegisterNameContext::INT_NUMBER() {
  return getToken(LGIRGrammarParser::INT_NUMBER, 0);
}


size_t LGIRGrammarParser::RegisterNameContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleRegisterName;
}

void LGIRGrammarParser::RegisterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegisterName(this);
}

void LGIRGrammarParser::RegisterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegisterName(this);
}


std::any LGIRGrammarParser::RegisterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitRegisterName(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::RegisterNameContext* LGIRGrammarParser::registerName() {
  RegisterNameContext *_localctx = _tracker.createInstance<RegisterNameContext>(_ctx, getState());
  enterRule(_localctx, 88, LGIRGrammarParser::RuleRegisterName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(LGIRGrammarParser::T__12);
    setState(394);
    _la = _input->LA(1);
    if (!(_la == LGIRGrammarParser::INT_NUMBER

    || _la == LGIRGrammarParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

LGIRGrammarParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::LabelContext::LABEL() {
  return getToken(LGIRGrammarParser::LABEL, 0);
}

tree::TerminalNode* LGIRGrammarParser::LabelContext::IDENTIFIER() {
  return getToken(LGIRGrammarParser::IDENTIFIER, 0);
}


size_t LGIRGrammarParser::LabelContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleLabel;
}

void LGIRGrammarParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void LGIRGrammarParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


std::any LGIRGrammarParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::LabelContext* LGIRGrammarParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 90, LGIRGrammarParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    match(LGIRGrammarParser::LABEL);
    setState(397);
    match(LGIRGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

LGIRGrammarParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LGIRGrammarParser::ConditionContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleCondition;
}

void LGIRGrammarParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void LGIRGrammarParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any LGIRGrammarParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::ConditionContext* LGIRGrammarParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 92, LGIRGrammarParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4177920) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

LGIRGrammarParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::UnaryOperatorContext::INC() {
  return getToken(LGIRGrammarParser::INC, 0);
}

tree::TerminalNode* LGIRGrammarParser::UnaryOperatorContext::DEC() {
  return getToken(LGIRGrammarParser::DEC, 0);
}

tree::TerminalNode* LGIRGrammarParser::UnaryOperatorContext::NOT() {
  return getToken(LGIRGrammarParser::NOT, 0);
}

tree::TerminalNode* LGIRGrammarParser::UnaryOperatorContext::NEG() {
  return getToken(LGIRGrammarParser::NEG, 0);
}


size_t LGIRGrammarParser::UnaryOperatorContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleUnaryOperator;
}

void LGIRGrammarParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void LGIRGrammarParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


std::any LGIRGrammarParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::UnaryOperatorContext* LGIRGrammarParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 94, LGIRGrammarParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4222124650659840) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

LGIRGrammarParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::ADD() {
  return getToken(LGIRGrammarParser::ADD, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::SUB() {
  return getToken(LGIRGrammarParser::SUB, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::MUL() {
  return getToken(LGIRGrammarParser::MUL, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::DIV() {
  return getToken(LGIRGrammarParser::DIV, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::MOD() {
  return getToken(LGIRGrammarParser::MOD, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::AND() {
  return getToken(LGIRGrammarParser::AND, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::OR() {
  return getToken(LGIRGrammarParser::OR, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::XOR() {
  return getToken(LGIRGrammarParser::XOR, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::SHL() {
  return getToken(LGIRGrammarParser::SHL, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::SHR() {
  return getToken(LGIRGrammarParser::SHR, 0);
}

tree::TerminalNode* LGIRGrammarParser::BinaryOperatorContext::USHR() {
  return getToken(LGIRGrammarParser::USHR, 0);
}


size_t LGIRGrammarParser::BinaryOperatorContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleBinaryOperator;
}

void LGIRGrammarParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void LGIRGrammarParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}


std::any LGIRGrammarParser::BinaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitBinaryOperator(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::BinaryOperatorContext* LGIRGrammarParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 96, LGIRGrammarParser::RuleBinaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9218868437227405312) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCastKindContext ------------------------------------------------------------------

LGIRGrammarParser::TypeCastKindContext::TypeCastKindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::ZEXT() {
  return getToken(LGIRGrammarParser::ZEXT, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::SEXT() {
  return getToken(LGIRGrammarParser::SEXT, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::TRUNC() {
  return getToken(LGIRGrammarParser::TRUNC, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::ITOF() {
  return getToken(LGIRGrammarParser::ITOF, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::FTOI() {
  return getToken(LGIRGrammarParser::FTOI, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::ITOP() {
  return getToken(LGIRGrammarParser::ITOP, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::PTOI() {
  return getToken(LGIRGrammarParser::PTOI, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::PTOP() {
  return getToken(LGIRGrammarParser::PTOP, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::FEXT() {
  return getToken(LGIRGrammarParser::FEXT, 0);
}

tree::TerminalNode* LGIRGrammarParser::TypeCastKindContext::FTRUNC() {
  return getToken(LGIRGrammarParser::FTRUNC, 0);
}


size_t LGIRGrammarParser::TypeCastKindContext::getRuleIndex() const {
  return LGIRGrammarParser::RuleTypeCastKind;
}

void LGIRGrammarParser::TypeCastKindContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeCastKind(this);
}

void LGIRGrammarParser::TypeCastKindContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LGIRGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeCastKind(this);
}


std::any LGIRGrammarParser::TypeCastKindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LGIRGrammarVisitor*>(visitor))
    return parserVisitor->visitTypeCastKind(this);
  else
    return visitor->visitChildren(this);
}

LGIRGrammarParser::TypeCastKindContext* LGIRGrammarParser::typeCastKind() {
  TypeCastKindContext *_localctx = _tracker.createInstance<TypeCastKindContext>(_ctx, getState());
  enterRule(_localctx, 98, LGIRGrammarParser::RuleTypeCastKind);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    _la = _input->LA(1);
    if (!(((((_la - 63) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 63)) & 1023) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void LGIRGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lgirgrammarParserInitialize();
#else
  ::antlr4::internal::call_once(lgirgrammarParserOnceFlag, lgirgrammarParserInitialize);
#endif
}
