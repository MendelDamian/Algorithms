// https://cses.fi/problemset/task/1094/
#include <iostream>
#include <cstdint>
 
int main() {
    uint64_t n, prev, current, difference;
    unsigned long long missing = 0;
    
    std::cin >> n >> prev;

    for (size_t i = 1; i < n; i++)
    {
        std::cin >> current;
        if (current < prev) 
        {
            difference = prev - current;
            missing += difference;
            current += difference;
        }
        prev = current;
    }
    std::cout << missing << std::endl;
    
    return 0;
}