#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Human::Human() : name("Human") {}

Human::Human(std::string name) : name(name) {}

Move * Human::makeMove() const {
    std::string move;
    std::cin >> move;
    
    if (move == "Rock") return new Rock();
    if (move == "Paper") return new Paper();
    if (move == "Scissors") return new Scissors();
    if (move == "Monkey") return new Monkey();
    if (move == "Robot") return new Robot();
    if (move == "Pirate") return new Pirate();
    if (move == "Ninja") return new Ninja();
    if (move == "Zombie") return new Zombie();

    std::cout << "Invalid input. Default Rock." << std::endl;
    return new Rock();
}

std::string Human::getName() const {return name;}
