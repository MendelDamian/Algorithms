// https://cses.fi/problemset/task/1617/
#include <iostream>
#include <cstdint>
 
int main() {
    uint64_t n, sum = 2;
    std::cin >> n;

    for (size_t i = 1; i < n; i++)
    {
        sum *= 2;
        if (sum > (uint64_t)1e9+7)
        {
            sum %= (uint64_t)1e9+7;
        }
    }

    std::cout << sum << std::endl;
    
    return 0;
}