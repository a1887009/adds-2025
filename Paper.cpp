#include "Paper.h"

std::string Paper::getName() const {return "Paper";}

bool Paper::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Rock";
}