#include <iostream>

#include "file.h"

int main()
{
    int a,b,c;
    std::cout << "Adding 2 numbers";
    
    std::cout << "\nEnter First Number: ";  
    std::cin >> a;
    
    std::cout << "\nEnter Second Number: ";  
    std::cin >> b;

    c = add(a,b);

    std::cout << "\nSum of 2 numbers: " << c;

    std::cin.ignore();
    std::cin.get();
    
    return 0;
}