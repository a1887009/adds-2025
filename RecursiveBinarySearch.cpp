#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int>& list, int target, int start, int end) {
    if (end == -1) end = list.size() - 1;

    if (start > end) return false; // List not found

    int mid = start + (end - start) / 2;

    if (list[mid] == target) return true; // Check that midpoint is target

    if (list[mid] < target) return search(list, target, mid + 1, end);
    else return search(list, target, start, mid - 1);
};
