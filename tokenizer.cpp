#include "include/scopec/tokens.hpp"
#include <vector>
#include <regex>

using namespace std;

vector<Token> tokenize(const string &sourceCode) {

    string Keywords[28] = {
      "program", "uses", "var", "proc", "func", "init",
      "if", "then", "else", "while", "do", "for", "to", "integer",
      "real", "char", "string", "boolean", "true", "false", "mut", "owner",
      "borrow", "class", "public", "private", "try", "finally"
    };

    string Operators[14] = {
      ":=", "+", "-", "*", "/", "=",
      "<>", "<", "<=", ">", ">=", "and", "not", "or"
    };

    string Delimiters[9] = {
      "{", "}", "(", ")", ";",
      ":", ",", ".", ".."
    };

    const string EOF_MARKER = "}.";

    return tokens;
}
