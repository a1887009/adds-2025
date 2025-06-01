#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    if (documents.find(id) == documents.end() && name_to_id.find(name) == name_to_id.end()) {
        documents[id] = {name, id, license_limit, {}};
        name_to_id[name] = id;
    }
}
void DocumentManager::addPatron(int patronID) {patrons.insert(patronID);}
int DocumentManager::search(std::string name) {
    auto it = name_to_id.find(name);
    if (it != name_to_id.end()) {
        return it->second; // Return the document ID
    }
    return 0; // Document not found
}
bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false; // Invalid patron ID
    }
    auto it = documents.find(docid);
    if (it != documents.end()) {
        Document& doc = it->second;
        if (doc.active_borrowers.size() < doc.license_limit) {
            doc.active_borrowers.insert(patronID);
            return true; // Document successfully borrowed
        }
    }
    return false; // Document cannot be borrowed (either not found or license limit reached)
}
void DocumentManager::returnDocument(int docid, int patronID) {
    auto it = documents.find(docid);
    if (it != documents.end()) {
        Document& doc = it->second;
        doc.active_borrowers.erase(patronID); // Remove the patron from the active borrowers
    }
}