#include <iostream>
#include <cmath>
/*int main()
{   
    const double dollars_per_kr = 0.08936;
    const double dollars_per_yen = 0.0063;
    const double dollars_per_pound = 1.235;
     
    double amount = 1; 
    char currency = ' ';
    cout<< "Please enter a amount followed by a currency (k,y,p):\n";
    cin >> amount >> currency;
    switch (currency) {
        case 'k':
            cout << amount << "kr == " << amount * dollars_per_kr << "$\n";
            break;
        case 'y':
            cout << amount << "yen == " << amount * dollars_per_yen << "$\n";
            break;
        
        case 'p':
            cout << amount << "pound == " << amount * dollars_per_pound << "$\n";
        default:
            cout << "Faulty input";
    }      
}*/


int main() 
{   
    char character = 'a';
    const int to_upper = 32;
    for (int i = 0; i<26; i++) {
        std::cout << char(character+i) << '\t' << (character+i) << '\n';
        std::cout << char((character-to_upper)+i) << '\t' << ((character-to_upper)+i) << '\n';
    }
}