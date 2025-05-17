#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "TrieNode.h"
#include <unordered_map>

class PrefixMatcher {
private:
    TrieNode* root;
    std::unordered_map<TrieNode*, int> routerMap;

public:
    PrefixMatcher();
    ~PrefixMatcher();
    
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);
};

#endif // PREFIXMATCHER_H