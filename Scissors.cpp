#include "Scissors.h"

std::string Scissors::getName() const {return "Scissors";}

bool Scissors::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Paper";
}