#include <iostream>

void simple_error(std::string message);
int main()
{
    std::string first_name;
    std::string friend_name;
    int age = 0;
    std::cout << "Enter the first name of the person you want to write to: ";
    std::cin >> first_name;

    std::cout << "Dear, " << first_name << "\n";
    std::cout << "How are you? Im fine. I miss you.\n"
              << "Cant stop thinking about our last party! it was amazing\n"; 

    std::cout << "Enter the first name of a friend: ";
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " latley?\n";

    std::cout << "Enter friends age: ";
    while(true){
        std::cin >> age;
        if(age <= 0 || age >= 110 || std::cin.fail()) {
            simple_error("You're kidding!");
        }
        else
        {
            break;
        }
    }
    std::cout << "I hear you just had a birthday and are " << age << " years old\n";
    if(age < 12) {
        std::cout << "Next year you will be " << age+1 << "\n";
    }
    else if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    }
    else if ( age >= 70) {
        std::cout << "Are you retired?\n";
    }

    std::cout <<"Your sincerley ________\n";

}

void simple_error(std::string message){
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cout << "Must enter integer ";
        return;
    }
        std::cout << message << " ";
}