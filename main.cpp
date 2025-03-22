#include "Reverser.h"

int main() {

    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    std::cout << reversedNumber << std::endl;
    std::cout << r.reverseString("hello") << std::endl;
    return 0;
}
