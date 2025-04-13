#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <sstream>


int main() {
    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> list;
    int num;

    while (ss >> num) {
        list.push_back(num);
    }

    QuickSort sorter;
    std::vector<int> sorted = sorter.sort(list);

    RecursiveBinarySearch searcher;
    bool found = searcher.search(sorted, 1);

    std::cout << (found ? "true" : "false");

    for (int n : sorted) {
        std::cout << " " << n;
    }

    std::cout << std::endl;

    return 0;
}