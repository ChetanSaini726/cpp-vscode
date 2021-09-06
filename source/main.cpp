#include <iostream>

#include "file.h"

int main()
{
    int a,b,c;
    std::cout << "Adding 2 numbers" << std::endl;
    
    std::cout << "Enter First Number: ";  
    std::cin >> a;
    
    std::cout << "Enter Second Number: ";  
    std::cin >> b;

    c = add(a,b);

    std::cout << "Output: " << c << std::endl;

    std::cin.ignore();
    std::cin.get();
    
    return 0;
}