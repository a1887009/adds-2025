#include "QuickSort.h"

QuickSort::QuickSort() {};

void QuickSort::quicksort(std::vector<int>& array, int start, int end) {

    if (end <= start) return;

    int pivot = partition(array, start, end);
    quicksort(array, start, pivot - 1);
    quicksort(array, pivot + 1, end);
}

int QuickSort::partition(std::vector<int>& array, int start, int end) {
    int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (array[j] < pivot) {
            i++;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[i + 1], array[end]);
    return i + 1;
}


std::vector<int> QuickSort::sort(std::vector<int> list) {
    quicksort(list, 0, list.size() - 1); 
    return list;
};