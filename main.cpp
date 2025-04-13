#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"


int main() {
    std::vector<int> list1 = {1, 3, 5, 4, -5, 100, 7777, 2014};
    std::vector<int> list2 = {0, 3, 5, 4, -5, 100, 7777, 2014};
    RecursiveBinarySearch check;
    BubbleSort Bubble;
    Bubble.sort(list1);
    for (int i = 0; i < list1.size(); i++){
        std::cout << list1[i] << " ";
    }
    std::cout << check.search(list1, 1) << "\n";
    QuickSort Quick;
    Quick.sort(list2);
    for (int i = 0; i < list2.size(); i++){
        std::cout << list2[i] << " ";
    }

    std::cout << check.search(list2, 1) << "\n";

    return 0;
}