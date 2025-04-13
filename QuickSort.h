#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort: public Sort {
private:
    void quicksort(std::vector<int>& array, int start, int end);
    int partition(std::vector<int>& array, int start, int end); 
public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list) override;
};

#endif //QUICKSORT_H