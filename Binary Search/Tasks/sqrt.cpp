/*
Algorithm calculates square root for given number
*/

#include <iostream>
#include <ctype.h>
#include <iomanip>

double binarySearch(uint32_t number, double precision=1e-9);

int main() {
    uint32_t number = 2;
    double output = binarySearch(2);

    std::cout << "The nearest found square root of number " << number << " is " << std::setprecision(10) << output << std::endl;
    return 0;
}

double binarySearch(uint32_t number, double precision) {
    double left = 0, right = number, mid = 0;

    while (right - left > 1e-9) {
        mid = left + (right - left) / 2;
        
        if (mid * mid < number) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return mid;
}
