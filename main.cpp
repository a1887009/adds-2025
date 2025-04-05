#include <iostream>
#include "Finder.h"

int main() {
    std::string s1, s2;
    
    std::cout << "Enter main string (s1): ";
    std::cin >> s1;
    std::cout << "Enter substring (s2): ";
    std::cin >> s2;

    Finder finder;
    std::vector<int> result = finder.findSubstrings(s1, s2);
 
    std::cout << "Substring positions: ";
    for (int pos : result) {
        std::cout << pos << " ";
    }
    std::cout << std::endl;

    return 0;
}