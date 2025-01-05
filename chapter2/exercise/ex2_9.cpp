#include <iostream>

int main()
{
    /*write zero print 0
    write two print 2 
    write three print 3
    write four print 4
    write five print 4*/
    std::string number;
    std::cout << "Write out a spelled number as a string: ";
    std::cin >> number;
    number[0] = std::toupper(number[0]);
    if(number == "Zero" || number == "0") {
        std::cout << 0 << "\n";
    }
    else if (number == "One" || number == "1") {
        std::cout << 1 << "\n";
    }
    else if (number == "Two" || number == "2") {
        std::cout << 2 << "\n";
    }
    else if (number == "Three" || number == "3") {
        std::cout << 3 << "\n";
    }
    else if (number == "Four" || number == "4") {
        std::cout << 4 << "\n";
    }
    else {
        std::cout << "Not a number I know\n";
    }

}