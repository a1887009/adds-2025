#include "Zombie.h"

std::string Zombie::getName() const {return "Zombie";}

bool Zombie::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Pirate" || otherPlayer.getName() == "Monkey";
}