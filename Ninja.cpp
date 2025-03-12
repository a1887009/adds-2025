#include "Ninja.h"

std::string Ninja::getName() const {return "Ninja";}

bool Ninja::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Pirate" || otherPlayer.getName() == "Zombie";
}