// https://cses.fi/problemset/task/1070
#include <iostream>
#include <cstdint>
 
int main() 
{
    uint32_t n;
    std::cin >> n;
    
    if (n > 1 && n < 4) 
    {
        std::cout << "NO SOLUTION" << std::endl;
    } 
    else 
    {
        for (size_t i = 2; i < n + 1; i += 2)
        {
            std::cout << i << " ";
        }
        for (size_t i = 1; i < n + 1; i += 2)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}