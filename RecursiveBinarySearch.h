#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include <vector>

class RecursiveBinarySearch {
public:
    bool search(std::vector<int> list, int target, int start = 0, int end = -1);
};


#endif //RECURSIVEBINARYSEARCH_H