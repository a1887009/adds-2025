#include "TrieNode.h"
#include "Autocomplete.h"
#include "PrefixMatcher.h"

int main() {
    Autocomplete ac;
    ac.insert("bin");
    ac.insert("ball");
    ac.insert("ballet");

    std::vector<std::string> prefixes = {"b", "ba", "bal", "balle"};

    for (const std::string& prefix : prefixes) {
        std::vector<std::string> suggestions = ac.getSuggestions(prefix);
        std::cout << "Suggestions for \"" << prefix << "\": ";
        for (const std::string& word : suggestions) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    } 

    PrefixMatcher matcher;
    matcher.insert("1100110111", 1);  // Router 1
    matcher.insert("110011011", 2);   // Router 2
    matcher.insert("11001101", 3);    // Router 3

    std::string packetAddress = "110011011001";
    int selectedRouter = matcher.selectRouter(packetAddress);
    std::cout << "Selected router: " << selectedRouter << std::endl;

    return 0;
}
