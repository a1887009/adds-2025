#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>

class Reverser {
public:
    Reverser();
    int reverseDigit(int value, int rev = 0);
    std::string reverseString(std::string characters);
};




#endif //REVERSER_H