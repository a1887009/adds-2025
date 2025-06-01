#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include "Document.h"

class DocumentManager {
private:
    // Unordered maps are chosen as they have average O(1) time complexity for insertions and lookups.
    // With a few million documents, it is efficient to transfer the work load to the ram.
    std::unordered_map<int, Document> documents; // Maps document ID to Document object
    std::unordered_map<std::string, int> name_to_id; // Maps document name to document ID
    std::unordered_set<int> patrons; // Set of patron IDs

public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection
    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    void returnDocument(int docid, int patronID);

};

#endif // DOCUMENTMANAGER_H