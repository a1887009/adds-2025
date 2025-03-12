#include "Monkey.h"

std::string Monkey::getName() const {return "Monkey";}

bool Monkey::beats(const Move& otherPlayer) const {
    return otherPlayer.getName() == "Ninja" || otherPlayer.getName() == "Robot";
}