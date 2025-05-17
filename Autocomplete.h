#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"

class Autocomplete {
private:

    TrieNode* root;
    void dfs(TrieNode* node, std::string prefix, std::vector<std::string>& results);
    TrieNode* findNode(const std::string& prefix);

public:

    Autocomplete();
    ~Autocomplete();
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
    
};


#endif // AUTOCOMPLETE_H