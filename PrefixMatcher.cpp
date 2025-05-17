#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
    root->children = std::vector<TrieNode*>(2, nullptr);
}

PrefixMatcher::~PrefixMatcher() {
    delete root;
}
    
void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char bit : address) {
        int index = bit - '0';
        if (current->children.empty()) {
            current->children = std::vector<TrieNode*>(2, nullptr);
        }
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
            current->children[index]->children = std::vector<TrieNode*>(2, nullptr);
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
    routerMap[current] = routerNumber;
}


int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current =  root;
    int lastSeenRouter = -1;

    for (char bit : networkAddress) {
        int index = bit - '0';
        if (current->children.empty() || !current->children[index]) {
            break;
        }
        current = current->children[index];
        if (routerMap.find(current) != routerMap.end()) {
            lastSeenRouter = routerMap[current];
        }
    }

    return lastSeenRouter;
}