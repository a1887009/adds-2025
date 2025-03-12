#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual bool beats(const Move& otherPlayer) const = 0;
    virtual ~Move() = default;
};

#endif //MOVE_H