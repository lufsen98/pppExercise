#include <iostream>

/*Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete. In other words,
don’t just output yes or no. Your output should stand alone, like The
value 4 is an even number. Hint: See the remainder (modulo) operator in
§2.4.*/

int main()
{  
    int val1 = 0;
    std::cout << "Enter an integer to see if it is odd or even: ";
    std::cin >> val1;
    
    if(val1 % 2 == 0) {
        std::cout << "The number, " << val1 << " is even\n";
    }
    else
    {
        std::cout << "The number, " << val1 << " is odd\n";
    }

}