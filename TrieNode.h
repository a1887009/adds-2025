#ifndef TRIENODE_H
#define TRIENODE_H

#include <iostream>
#include <vector>

struct TrieNode {
    bool isEndOfWord;
    std::vector<TrieNode*> children;

    TrieNode();
    ~TrieNode();
};

#endif // TRIENODE_H