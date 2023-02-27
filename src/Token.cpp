#include "Token.h"
#include "StringUtil.h"

namespace Lox {
std::string Token::toString() const {
    return convertToString(type_) + " " + lexeme_ +;
}

} // namespace Lox