#include "Autocomplete.h"

void Autocomplete::dfs(TrieNode* node, std::string prefix, std::vector<std::string>& results) {
    if (node->isEndOfWord) {
        results.push_back(prefix);
    }
    for (int i = 0; i < 26; ++i) {
        if (node->children[i]) {
            dfs(node->children[i], prefix + char(i + 'a'), results);
        }
    }
}

TrieNode* Autocomplete::findNode(const std::string& prefix) {
    TrieNode* current = root;
    for (char ch : prefix) {
        int index = ch - 'a';
        if (!current->children[index]) {
            return nullptr;
        }
        current = current->children[index];
    }
    return current;
}

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

Autocomplete::~Autocomplete() {
    delete root;
}

void Autocomplete::insert(std::string word) {
    TrieNode* current = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (!current->children[index]) {
            current->children[index] = new TrieNode();
        }
        current = current->children[index];
    }
    current->isEndOfWord = true;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> results;
    TrieNode* node = findNode(partialWord);
    if (node) {
        dfs(node, partialWord, results);
    }
    return results;
}
