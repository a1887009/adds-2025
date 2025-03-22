#include "Truckloads.h"   

Truckloads::Truckloads() {}
int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 0 || loadSize <= 0) return -1;
    if (numCrates <= loadSize) return 1;

    // Split the loads this way for odd load case
    int half1 = numCrates / 2;
    int half2 = numCrates - half1;
    return numTrucks(half1, loadSize) + numTrucks(half2, loadSize);
}