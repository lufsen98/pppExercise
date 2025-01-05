#include <iostream>
/*[11] Write a program that prompts the user to enter some number of pennies
(1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
(25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-
cent coins). Query the user separately for the number of each size coin,
e.g.,
“How many pennies do you have?” Then your program should
print out something like this:
Click here to view code image
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
Make some improvements: if only one of a coin is reported, make the
output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
Also, report the sum in dollars and cents, i.e., .73 instead of 573 cents.*/
int main()
{   
    double total_dollars = 0.0;
    int total_cents = 0;
    int pennies = 0;
    int nickles = 0;
    int quarters = 0;
    int dimes = 0;
    int half_dollars  = 0;

    std::cout << "how many pennies do you have: ";
    std::cin >> pennies;
    std::cout << "how many nickles do you have: ";
    std::cin >> nickles;
    std::cout << "how many dimes do you have: ";
    std::cin >> dimes;
    std::cout << "how many quarters do you have: ";
    std::cin >> quarters;
    std::cout << "how many half dollars do you have: ";
    std::cin >> half_dollars;
    if(pennies == 1) {
        std::cout << "You have: " << pennies << " pennie.\n";
    }
    else {
        std::cout << "You have: " << pennies << " pennies.\n";
    }
    if(nickles == 1) {
        std::cout << "You have: " << nickles << " nickle.\n";
    }
    else {
        std::cout << "You have: " << nickles << " nickles.\n";
    }
    if(dimes == 1) {    
        std::cout << "You have: " << dimes << " dime.\n";
    }
    else {
        std::cout << "You have: " << dimes << " dimes.\n";
    }
    if(quarters == 1) {
        std::cout << "You have: " << quarters << " quarter.\n";
    }
    else {
        std::cout << "You have: " << quarters << " quarters.\n";
    }
    if(half_dollars == 1) {
        std::cout << "You have: " << half_dollars << " half dollar\n";
    }
    else {
        std::cout << "You have: " << half_dollars << " half dollars.\n";
    }
    total_cents += pennies + (nickles * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50);
    std::cout << total_cents << "\n";
    total_dollars += total_cents/100.0;  
    std::cout << "You have: " << total_dollars << " dollars\n";

    //save all the values in the coins

    //

}