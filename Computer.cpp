#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Computer::Computer() : name("Computer") {}

Computer::Computer(std::string name) : name(name) {}

Move * Computer::makeMove() const {
    srand(time(0));
    int move= rand() % 8;
    
    if (move == 0) return new Rock();
    if (move == 1) return new Paper();
    if (move == 2) return new Scissors();
    if (move == 3) return new Monkey();
    if (move == 4) return new Robot();
    if (move == 5) return new Pirate();
    if (move == 6) return new Ninja();
    return new Zombie();
}

std::string Computer::getName() const {return name;}