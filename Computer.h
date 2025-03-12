#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player {
    std::string name;
public:
    Computer();
    Computer(std::string name);
    Move * makeMove() const override;
    std::string getName() const override;

};



#endif //COMPUTER_H