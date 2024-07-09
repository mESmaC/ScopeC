#ifndef TOKENS_H
#define TOKENS_H

#include <string>

    enum class TokenType {
        eof,
        
    };

    struct Token {
        std::string value;
        TokenType type;
    };

#endif