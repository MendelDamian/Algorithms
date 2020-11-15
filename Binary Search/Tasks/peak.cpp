/*
The array increases and then decreases. Find the maximum
*/

#include <iostream>
#include <ctype.h>

int binarySearch(int *array, size_t array_size);

int main() {
    size_t array_size = 100;
    int array[array_size];

    for (size_t i = 0; i < array_size; i++) {
        array[i] = i < 90 ? i : 100 - i;
    }

    int peak = binarySearch(&array[0], array_size);
    std::cout << "Found peak: " << peak << std::endl;
    return 0;
}

int binarySearch(int *array, size_t array_size) {
    uint32_t left = 0, right = array_size - 1, mid = 0;

    while (true) {
        mid = left + (right - left) / 2;

        if (mid == left) {
            break;
        }

        if (array[mid] < array[mid - 1]) {
            right = mid;
        } else {
            left = mid;
        }
    }

    return array[mid];
}
