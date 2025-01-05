#include <iostream>
/*[10] Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 45
Read the operation into a string called operation and use an if-statement
to figure out which operation the user wants, for example, if
(operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, −
*
,
, /, plus, minus, mul, and div
with their obvious meanings.*/

int main()
{   std::string operation;
    double operand1; 
    double operand2;

    //promt which operation promt operand 1 operand 2
    std::cout << "**Instruction**\n"
              << "Write which operand you want to use (+)(-)(*)(/) then write 2 operands you want to operate: ";
    std::cin >> operation >> operand1 >> operand2;
    //condition operrand do the evaluation

    if(operation == "+") {
        std::cout << operand1 + operand2 << "\n"; 
    }
    else if (operation == "-") {
        std::cout << operand1 - operand2 << "\n";
    }
    else if (operation == "*") {
        std::cout << operand1 * operand2 << "\n";
    }
    else if (operation == "/") {
        std::cout << operand1 / operand2 << "\n";
    }
    else    
    {
        std::cout << "Not a valid operand\n";
    }



}