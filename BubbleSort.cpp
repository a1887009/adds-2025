#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int size = list.size();
    bool swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                std::swap(list[j], list[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    return list;
}