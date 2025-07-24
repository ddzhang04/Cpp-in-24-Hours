#include <iostream>

int add(int x, int y, int z)
{
    std::cout << "Running Calculator...\n";
    return (x+y+z);
}

int main()
{
    std::cout << "What is 867 + 5309 + 1\n";
    std::cout << "The sum is " << add(867, 5309, 1) << "\n\n";
    std::cout << "What is 12 + 13\n";
    std::cout << "The sum is " << add(12, 13, 1) << "\n\n";
    return 0;
}

