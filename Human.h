#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human: public Player {
    std::string name;
public:
    Human();
    Human(std::string name);
    Move * makeMove() const override;
    std::string getName() const override;

};

#endif //HUMAN_H