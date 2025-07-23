#include <iostream>

int add(int x, int y)
{
    std::cout << "Running Calculator...\n";
    return (x+y);
}

int main()
{
    std::cout << "What is 867 + 5309\n";
    std::cout << "The sum is " << add(867, 5309) << "\n\n";
    std::cout << "What is 12 + 13\n";
    std::cout << "The sum is " << add(12, 13) << "\n\n";
    return 0;
}

