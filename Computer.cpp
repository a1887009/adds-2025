#include "Computer.h"


// Constructor to give the computer defaults as specified
Computer::Computer() : move('R'), name("Computer") {}

// Functions
char Computer::makeMove() {return move;}
std::string Computer::getName() {return name;}