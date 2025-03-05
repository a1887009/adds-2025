#include "Human.h"

// Constructors
Human::Human() : name("Human") {}
Human::Human(const std::string& name) : name(name) {}

// Moves function
char Human::makeMove() {
    std::cout << "Enter move: ";
    std::cin >> move;
    return toupper(move);
}

// Name function
std::string Human::getName() {
    return name;
}

