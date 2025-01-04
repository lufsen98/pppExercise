#include <iostream>
/*[3] Write a program that doesn’t do anything, but declares a number of
variables with legal and illegal names (such as int double = 0;), so that
you can see how the compiler reacts.*/ //*************Check

/*[4] Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and val2. Write your program to
determine the smaller, larger, sum, difference, product, and ratio of
these values and report them to the user.*/

int main()
{ 
    //save values
    int val1 = 0;
    int val2 = 0;
    int sum = 0;
    int difference = 0;
    int product = 0;
    double ratio = 0.0;
    std::cout << "Write 2 integer values: ";
    std::cin >> val1 >> val2;
    if(val1 < val2)
    {
        std::cout << val1 << " is smaller\n";
        std::cout << val2 << " is larger\n";
        difference = val2 - val1;
    }
    else if (val2 < val1)
    {
        std::cout << val2 << " is smaller\n";
        std::cout << val1 << " is larger\n";
        difference = val1 - val2;
    }
    else 
    {
        std::cout << "Values are equal\n";
    }
    ratio = val1 / val2;
    sum = val1 + val2;
    product = val1 * val2;

    std::cout << product << " is the product\n";
    std::cout << ratio << " is the ratio of " << val1 << ":" << val2 << "\n";
    std::cout << difference << " is the differnece\n";
    std::cout << sum << " is the sum\n";
    //determind ratio of all the values above.
    

}