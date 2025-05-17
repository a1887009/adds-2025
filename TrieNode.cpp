#include "TrieNode.h"

TrieNode::TrieNode() : isEndOfWord(false), children(26, nullptr) {}

TrieNode::~TrieNode() {
    for (TrieNode* child : children) {
        delete child;
    }
}