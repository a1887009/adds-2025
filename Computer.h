#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{
    // Computer stored memory
    char move;
    std::string name;
public:
    // Constructor
    Computer();

    // Functions with override used for better practice
    char makeMove() override;
    std::string getName() override;

};


#endif //COMPUTER_H
