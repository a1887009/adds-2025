#include <iostream>
#include <vector>
#include <queue>


int kth_largest(std::vector<int> values, int k) {
    // Check if k is valid
    if (k <= 0 || k > values.size()) {
        throw std::invalid_argument("k must be between 1 and the size of the input vector.");
    }

    // Use a min-heap to keep track of the top k largest elements
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int val : values) {
        minHeap.push(val);
        if (minHeap.size() > k) {
            minHeap.pop();  // Remove the smallest among the top k
        }
    }

    // The root of the min-heap is the k-th largest element
    return minHeap.top();
}