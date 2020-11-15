#include <iostream>
#include <ctype.h>

int binarySearch(int *array, size_t array_size, int target);

int main() {
    size_t array_size = 100000;
    int array[array_size]{}, target = 1;

    for (size_t i = 0; i < array_size; i++) {
        array[i] = i+1;
    }

    int output = binarySearch(&array[0], array_size, target);

    std::cout << "Element " << target << " found at " << output << " index." << std::endl;
    return 0;
}

int binarySearch(int *array, size_t array_size, int target) {
    uint32_t left = 0, right = array_size;

    while (right >= left) {
        uint32_t mid = left + (right - left) / 2;
        int current = array[mid];

        if (current == target) {
            return mid;
        }
        if (current < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return -1;
}
