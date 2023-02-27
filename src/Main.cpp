#include <fstream>
#include <iostream>
#include <vector>

#include "Lexer.h"

namespace Lox {

// TODO: Make a proper error reporting system
bool hadError = false;

void report(int line, const std::string& where, const std::string& message) {
    std::cout << "[line " << line << "] Error " << where <<": " << message << std::endl;
    hadError = true;
}

void error(int line, const std::string& message) {
    report(line, "", message);
}

void run(const std::string &source) {
    Lexer lexer(source);
    std::vector<Token> tokens = lexer.scanTokens();

    for (auto t : tokens) {
        std::cout << t << std::endl;
    }
}

void runFile(const std::string &path) {
    std::fstream fs;
    std::string source;

    fs.open(path);
    if (fs.is_open()) {
        fs >> source;
    }
    run(source);
}

void runPrompt() {
    std::string line;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, line);
        if (line.empty()) {
            break;
        }
        run(line);
        hadError = false;
    }
}
}

int main(int argc, char *argv[]) {
    if (argc > 2) {
        std::cout << "Usage: trlox [script]" << std::endl;
        return 64;
    } else if (argc == 2) {
        Lox::runFile(argv[1]);
    } else {
        Lox::runPrompt();
    }

    if (Lox::hadError)
        return 65;
}
