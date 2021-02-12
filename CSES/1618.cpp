// https://cses.fi/problemset/task/1618/
#include <iostream>
#include <cstdint>
 
int main() {
    uint64_t n, sum = 0;
    std::cin >> n;

    while (n >= 5)
    {
        n /= 5;
        sum += n;
    }

    std::cout << sum << std::endl;
    
    return 0;
}