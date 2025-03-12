#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot: public Move{
public:
    std::string getName() const override;
    bool beats(const Move& otherPlayer) const override;
};


#endif //ROBOT_H