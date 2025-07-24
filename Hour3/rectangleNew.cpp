#include <iostream>

int main(){

    unsigned short width = 5, length;
    length = 10;
    unsigned short height = 3;

    unsigned short area = width * length * height;

    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Area: " << area << "\n";

    return 0;
}