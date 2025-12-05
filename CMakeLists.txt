cmake_minimum_required(VERSION 4.0)
project(lg-cpp)

set(CMAKE_CXX_STANDARD 20)

find_package(antlr4-runtime REQUIRED)

include_directories(${ANTLR4_INCLUDE_DIR} include/)

add_library(lg SHARED
        src/lg/lexer/LGIRGrammarParser.cpp
        src/lg/lexer/LGIRGrammarListener.cpp
        src/lg/lexer/LGIRGrammarLexer.cpp
        src/lg/lexer/LGIRGrammarBaseListener.cpp
        include/lg/lexer/LGIRGrammarLexer.h
        include/lg/lexer/LGIRGrammarBaseListener.h
        src/lg/ir.cpp
        include/lg/ir.h
        include/lg/builder.h
        src/lg/builder.cpp
        include/lg/dumper.h
        src/lg/dumper.cpp
        src/lg/parser.cpp
        include/lg/parser.h
        src/lg/lexer/LGIRGrammarBaseVisitor.cpp
        src/lg/lexer/LGIRGrammarVisitor.cpp
        include/lg/lexer/LGIRGrammarBaseVisitor.h
)
add_executable(lg-cpp_test
        src/lg/test.cpp
)

target_link_libraries(lg antlr4-runtime)
target_link_libraries(lg-cpp_test lg)
