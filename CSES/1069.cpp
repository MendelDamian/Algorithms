// https://cses.fi/problemset/task/1069
#include <iostream>
#include <cstdint>
 
int main() {
    std::string input;
    uint32_t current = 1, max = 1;

    std::cin >> input;
    for (size_t i = 1; i < input.length(); i++)
    {
        if (input[i] == input[i-1])
        {
            current += 1;
        }
        else
        {
            if (current > max)
            {
                max = current;
            }
            current = 1;
        }
    }
    std::cout << (max > current ? max : current) << std::endl;
 
    return 0;
}