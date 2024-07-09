#ifndef TOKENS_H
#define TOKENS_H

#include <string>

    enum class TokenType {
        TOK_EOF, PLUS, MINUS, MULTIPLY, DIVIDE,
        EQUAL, LESS, GREATER, LPAREN, RPAREN,
        COMMA, LBRACE, RBRACE, LBRACKET, RBRACKET,
        MOD, AND, OR, XOR, NOT, QUESTION,
        DOLLAR, AT, HASH, BACKSLASH, BACKQUOTE, IDENTIFIER,
        NUMBER, SIMUCOLON, COLON, DOT, ASSIGN, INIT,
        PROC, FUNC, USES, PROGRAM, STRING, MUT, VAR, OWNER,
        BORROW, CLASS, PUBLIC, PRIVATE, TRY, FINALLY, COMMENT
    };

    struct Token {
        std::string value;
        TokenType type;
    };

#endif
