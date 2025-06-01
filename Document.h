#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <unordered_set>

struct Document {
    std::string name;
    int id;
    int license_limit;
    std::unordered_set<int> active_borrowers;
};

#endif // DOCUMENT_H
