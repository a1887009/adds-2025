#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player{
public:
    virtual Move * makeMove() const = 0;
    virtual std::string getName() const = 0;
    virtual ~Player() = default;
};


#endif //PLAYER_H