#include <iostream>
/*[6] Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
values are the same, they should just be ordered together. So, the input 4
5 4 should give 4, 4, 5.*/

int main()
{   
    int val1;
    int val2;
    int val3;

    std::cout << "Write 3 integer values: ";
    std::cin >> val1 >> val2 >> val3;

    /*om val 1 är mindre än val 2 och 3 eller om val & val 2 är mindre än 3
    skriv ut 1 2 3
    om val 2 är mindre än val 1 och 3 och val 1 är mindre än 3
    skriv ut 2 1 3
    om val 3 är mindre än 1 och 2 och val 1 är mindre än 2 
    skriv ut 3 2 1 
            1 2 3
            1 3 2
            2 3 1
            2 1 3
            3 1 2
            3 2 1*/
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
