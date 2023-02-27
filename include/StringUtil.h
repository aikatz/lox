#pragma once

#include <string>

#include "Token.h"

namespace Lox {

template<typename T>
std::string convertToString(const T& value);

template<>
std::string convertToString<std::string>(const std::string& value) {
    return value;
}

template<>
std::string convertToString<TokenType> (const TokenType& value) {
    switch (value) {
        case TokenType::LeftParen:
            return "(";
        case TokenType::RightParen:
            return ")";
        case TokenType::LeftBrace:
            return "{";
        case TokenType::RightBrace:
            return "}";
        case TokenType::Comma:
            return ":";
        case TokenType::Dot:
            return ".";
        case TokenType::Minus:
            return "-";
        case TokenType::Plus:
            return "+";
        case TokenType::Semicolon:
            return ";";
        case TokenType::Slash:
            return "/";
        case TokenType::Star:
            return "*";
        case TokenType::Bang:
            return "!";
        case TokenType::BangEqual:
            return "!=";
        case TokenType::Equal:
            return "=";
        case TokenType::EqualEqual:
            return "==";
        case TokenType::Greater:
            return ">";
        case TokenType::GreaterEqual:
            return ">=";
        case TokenType::Less:
            return "<";
        case TokenType::LessEqual:
            return "<=";
        case TokenType::Identifier:
            return "Identifier";
        case TokenType::String:
            return "String";
        case TokenType::Number:
            return "Number";
        case TokenType::And:
            return "And";
        case TokenType::Class:
            return "Class";
        case TokenType::Else:
            return "Else";
        case TokenType::False:
            return "False";
        case TokenType::Fun:
            return "Fun";
        case TokenType::For:
            return "For";
        case TokenType::If:
            return "If";
        case TokenType::Nil:
            return "Nil";
        case TokenType::Or:
            return "Or";
        case TokenType::Print:
            return "Print";
        case TokenType::Return:
            return "Return";
        case TokenType::Super:
            return "Super";
        case TokenType::This:
            return "This";
        case TokenType::True:
            return "True";
        case TokenType::Var:
            return "Var";
        case TokenType::While:
            return "While";
        case TokenType::Eof:
            return "Eof";
    }

    return "Unknown";
}
}