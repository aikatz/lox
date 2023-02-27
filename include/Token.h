#pragma once

#include <string>

namespace Lox {
enum class TokenType {
    Unknown,
    LeftParen,      // (
    RightParen,     // )
    LeftBrace,      // {
    RightBrace,     // }
    Comma,          // ,
    Dot,            // .
    Minus,          // -
    Plus,           // +
    Semicolon,      // ;
    Slash,          // /
    Star,           // *
    Bang,           // !
    BangEqual,      // !=
    Equal,          // =
    EqualEqual,     // ==
    Greater,        // >
    GreaterEqual,   // >=
    Less,           // <
    LessEqual,      // <=
    Identifier,     // literal
    String,         // literal
    Number,         // literal
    And,            // and
    Class,          // class
    Else,           // else
    False,          // false
    Fun,            // fun
    For,            // for
    If,             // if
    Nil,            // nil
    Or,             // or
    Print,          // print
    Return,         // return
    Super,          // super
    This,           // this
    True,           // true
    Var,            // var
    While,          // while
    Eof             // EOF
};

class Token {
    // T literal_;
    TokenType type_ = TokenType::Unknown;
    int line_ = -1; // TODO: Add column?
    std::string lexeme_;

public:
    Token() = default;
    ~Token() = default;

    [[nodiscard]] std::string toString() const;
};
} // namespace Lox

std::ostream& operator<<(std::ostream& os, const Lox::Token& t) {
    os << t.toString();
    return os;
}
