#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player{
    // Human stored memory
    std::string name;
    char move;

public:
    // Default constructior and constructor given an input
    Human();
    Human(const std::string& name);

    // Functions with override used for better practice
    char makeMove() override;
    std::string getName() override;

};



#endif //HUMAN_H