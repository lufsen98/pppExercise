#include <iostream>
#include <algorithm>



/*
[1] Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/
/*[2] Change the program to write out the smaller value is: followed by the
smaller of the numbers and the larger value is: followed by the larger
value.*/

/*[6] Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it’s the smallest
so far, write the smallest so far after the number. If it is the largest so
far, write the largest so far after the number.*/


/*[7] Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume
conversion factors 1m==100cm, 1in==2.54cm, 1ft==12in. Read the unit
indicator into a string. You may consider 12 m (with a space between
the number and the unit) equivalent to 12m (without a space).*/

int main() {
    bool running = true;
    double value1 = 0 ,largest = 0, smallest = 0, meter_in_cm = 100, inch_in_cm = 2.54, feet_in_inch = 12;
    double total_m_entered = 0;
    std::string unit = " ", meter = "m", feet = "ft", inch = "in";
    int firstiteration = 0, number_of_values = 0;
    std::vector<double> meters_entered;

    while(running) {
        std::cout << "Enter a value and a unit: ";
        if(!(std::cin >> value1 >> unit)) {
            std::cin.clear();
            if(std::cin.peek() == 'q') {
                running = false;
                break;
            }
            else {
                std::cout << "Need to enter integer\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                continue;
            }
        }
        number_of_values ++;
        //för att kunna börja någon stans så att inte minsta automatiskt är 0;
        //validera vad för typ av unit som har matats in och beräkna hur stort värdet är med cm och inch som utgångs värde.
        if(unit == "cm") {
        }
        else if(unit == meter) {
            value1 *= meter_in_cm;
        }
        else if (unit == inch ) {
            value1 *= inch_in_cm;
        }
        else if (unit == feet) {
            value1 *= (feet_in_inch * inch_in_cm);
        }
        else {
            std::cout << "Not a valid unit use lowercase or try another.\n";
            continue;
        }
         if(firstiteration == 0) {
            smallest = value1;
            firstiteration ++;
        }
        meters_entered.push_back(value1/meter_in_cm);
        total_m_entered += value1/meter_in_cm;
        //skriv ut det minsta beräknade hittils och det största hittils (utgår från cm nu) 
        if (value1 > largest) {
            std::cout << value1;
            largest = value1;
            std::cout << "cm Largest yet\n";
        }
        if (value1 < smallest){
            std::cout << value1;
            smallest = value1;
            std::cout << "cm Smallest yet\n";
        }
        //Utifall man inte adderar något nytt värde till varken smallest eller largest.
        if((value1 > smallest) && (value1 < largest)) {
            std::cout << value1 << "cm\n";
        }
    }
    std::cout << "Thanks for using the program.\n";
    std::cout << "Number of values entered: " << number_of_values << "\n";
    std::cout << "Largest entered value: " << largest << "cm\n";
    std::cout << "Smallest entered value: " << smallest <<"cm\n";
    std::cout << "Total in meters: " << total_m_entered << "m\n";
    sort(meters_entered.begin(),meters_entered.end());
    for(double it : meters_entered) {
        std::cout << it << ",";
    }
}
