#include <iostream>

int main()
{   
    std::string val1;
    std::string val2;
    std::string val3;

    std::cout << "Write 3 strings: ";
    std::cin >> val1 >> val2 >> val3;

    if((val1 <= val2) && (val2 <= val3)) {
        std::cout << val1 << "," << val2 << "," << val3 << ".\n";
    }
    else if((val1 <= val3) && (val3 <= val2) ) {
        std::cout << val1 << "," << val3 << "," << val2 << ".\n";
    }
        
    if((val2 <= val1) && (val1 <= val3)) {
        std::cout << val2 << "," << val1 << "," << val3 << ".\n";
    }
    else if((val2 <= val3) && (val3 <= val1) ) {
        std::cout << val2 << "," << val3 << "," << val1 << ".\n";
    }

    if((val3 <= val1) && (val1 <= val2)) {
        std::cout << val3 << "," << val1 << "," << val2 << ".\n";
    }
    else if((val3 <= val2) && (val2 <= val1) ) {
        std::cout << val3 << "," << val2 << "," << val1 << ".\n";
    }

}
