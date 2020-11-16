// https://cses.fi/problemset/task/1068
#include <iostream>
#include <ctype.h>

int main() {
    uint64_t n;
    std::cin >> n;

    std::cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        std::cout << " " << n;
    }
    std::cout << std::endl;
    return 0;
}