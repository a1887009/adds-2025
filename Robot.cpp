#include "Robot.h"

std::string Robot::getName() const {return "Robot";}

bool Robot::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Ninja" || otherPlayer.getName() == "Zombie";
}