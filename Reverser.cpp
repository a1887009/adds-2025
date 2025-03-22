#include "Reverser.h"

Reverser::Reverser() {};
int Reverser::reverseDigit(int value, int rev) {
    if (value < 0) return -1;
    if (value == 0) return rev;
    return reverseDigit(value / 10, rev * 10 + value % 10);

};
std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return "ERROR";
    if (characters.size() == 1) return characters;
    return characters.back() + reverseString(characters.substr(0, characters.size() - 1));
};