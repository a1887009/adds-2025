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
    int move= rand() % 8;
    
    switch (move) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Monkey();
        case 4: return new Robot();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
        default: return new Rock();
    }
}

std::string Computer::getName() const {return name;}