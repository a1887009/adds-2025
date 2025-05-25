// main.cpp
#include "Heap.tpp"
#include <iostream>

int main() {
    std::vector<int> input = {30, 20, 50, 10, 40, 60};

    std::cout << "Building heap from vector: ";
    for (int val : input) std::cout << val << " ";
    std::cout << std::endl;

    Heap<int> h;
    for (int val : input) {
        std::cout << "Inserting " << val << " into heap..." << std::endl;
        h.insert(val);
        h.printHeap();
    }

    std::cout << "\nMinimum element in heap: " << h.getMin() << std::endl;

    std::cout << "\nRemoving element 20..." << std::endl;
    h.remove(20);
    h.printHeap();

    std::cout << "\nRemoving element 10 (current min)..." << std::endl;
    h.remove(10);
    h.printHeap();

    std::cout << "\nPopping all elements from the heap:" << std::endl;
    while (!h.isHeapEmpty()) {
        std::cout << "Pop: " << h.popTop() << std::endl;
        h.printHeap();
    }

    std::cout << "\nTesting heapSort() on vector: ";
    for (int val : input) std::cout << val << " ";
    std::cout << std::endl;

    Heap<int> sorter;
    std::vector<int> sorted = sorter.heapSort(input);

    std::cout << "Sorted output: ";
    for (int val : sorted) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
