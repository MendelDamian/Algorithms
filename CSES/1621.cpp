// https://cses.fi/problemset/task/1621
#include <iostream>
#include <cstdint>
#include <set>

int main() {
    uint32_t n;
    std::set<uint32_t> uniqueNumbers;
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        uint32_t number;
        std::cin >> number;
        uniqueNumbers.insert(number);
    }

    std::cout << uniqueNumbers.size() << std::endl;

    return 0;
}