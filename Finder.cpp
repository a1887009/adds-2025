#include "Finder.h"


std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {

    std::vector<int> result;
    int s = 0;

    for(size_t i = 1; i <= s2.size(); i++) {

        size_t found = s1.find(s2.substr(0, i), s);

        if (found != std::string::npos) {
            result.push_back(found);
            s = found;
        } else {
            while(result.size() < s2.size()) {
                result.push_back(-1);
            }
            break;
        }
    }
    return result;
}