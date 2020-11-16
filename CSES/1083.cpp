// https://cses.fi/problemset/task/1083
#include <iostream>
#include <ctype.h>

int main() {
    uint32_t n, input_number;
    unsigned long long input_sum{0}, proper_sum;
    std::cin >> n;
    proper_sum = (1+n)/2.0*n;
    
    for (size_t i = 0; i < n - 1; i++) {
        std::cin >> input_number;
        input_sum += input_number;
    }

    std::cout << proper_sum - input_sum << std::endl;
    return 0;
}