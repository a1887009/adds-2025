#include "Rock.h"

std::string Rock::getName() const {return "Rock";}

bool Rock::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Scissors";
}