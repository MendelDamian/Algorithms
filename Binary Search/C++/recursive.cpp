#include <iostream>
#include <ctype.h>

int binarySearch(int *array, int left, int right, int target);

int main() {
    size_t array_size = 100000;
    int array[array_size]{}, target = 1;

    for (size_t i = 0; i < array_size; i++) {
        array[i] = i+1;
    }

    int output = binarySearch(&array[0], 0, array_size - 1, target);

    std::cout << "Element " << target << " found at " << output << " index." << std::endl;
    return 0;
}

int binarySearch(int *array, uint32_t left, uint32_t right, int target) {
    uint32_t mid = left + (right - left) / 2;
    
    if (array[mid] == target) {
        return mid;
    }
    if (right <= left) {
        return -1;
    }
    if (array[mid] > target) {
        right = mid;
    }
    if (array[mid] < target) {
        left = mid;
    }
    return binarySearch(&array[0], left, right, target);
}
