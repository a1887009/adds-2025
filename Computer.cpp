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

Move * Computer::makeMove() const {return new Rock();}

std::string Computer::getName() const {return name;}