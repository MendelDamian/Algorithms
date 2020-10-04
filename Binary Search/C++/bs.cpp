#include <iostream>
#include <ctype.h>

int32_t binarySearch(int32_t *array, int32_t l, int32_t r, int32_t target, int32_t *num_of_iterations);

int main() {
    size_t ARRAY_SIZE = 100000;
    int32_t array[ARRAY_SIZE]{}, target = 1, num_of_iterations = 0;

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i+1;
    }

    int32_t output = binarySearch(&array[0], 0, ARRAY_SIZE - 1, target, &num_of_iterations);

    std::cout << "Element " << target << " found at " << output << " index, " 
              << num_of_iterations << " operations were performed." << std::endl;
    return 0;
}

int32_t binarySearch(int32_t *array, int32_t left, int32_t right, int32_t target, int32_t *num_of_iterations) {
    int32_t mid = left + (right - left) / 2;
    *num_of_iterations += 1;
    
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
    return binarySearch(&array[0], left, right, target, num_of_iterations);
}
