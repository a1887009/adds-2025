#include "Pirate.h"

std::string Pirate::getName() const {return "Pirate";}

bool Pirate::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Monkey" || otherPlayer.getName() == "Robot";
}