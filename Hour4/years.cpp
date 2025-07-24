#include <iostream>

int main(){

    int year = 2010;
    std::cout << "The year " << ++year << " passes\n";
    std::cout << "The year " << ++year << " passes\n";
    std::cout << "The year " << ++year << " passes\n";
    
    std::cout << "\nIt is now " << year << ".";

    std::cout << " Have the Mariners won? \n";

    std::cout << "\nThe year " << year++ << " passes\n";
    std::cout << "The year " << year++ << " passes\n";
    std::cout << "The year " << year++ << " passes\n";
    return 0;
}