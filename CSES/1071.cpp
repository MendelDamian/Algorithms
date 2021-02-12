// https://cses.fi/problemset/task/1071
#include <iostream>
#include <cstdint>

int main() {
    uint64_t n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        uint64_t y, x, value;
        std::cin >> y >> x;

        if (y >= x)
        {
            // If even
            if ((y & 1) == 0)
            {
                value = y * y - x + 1;
            }
            // If odd
            else
            {
                value = (y - 1) * (y - 1) + x;
            }
        }
        else
        {
            // If even
            if ((x & 1) == 0)
            {
                value = (x - 1) * (x - 1) + y;
            }
            // If odd
            else
            {
                value = x * x - y + 1;
            }
        }
        std::cout << value << std::endl;
    }
    
    return 0;
}