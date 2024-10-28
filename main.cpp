// main.cpp
// This program tests the dayType class to verify that all member functions work as expected.

#include "dayType.h"
#include <iostream>

int main() {
    // Testing default constructor
    dayType defaultDay;
    std::cout << "Default day (should be Sunday): ";
    defaultDay.printDay();

    // Testing parameterized constructor with valid input
    dayType specifiedDay(2); // Tuesday
    std::cout << "Specified day (should be Tuesday): ";
    specifiedDay.printDay();

    // Testing getDay function
    std::cout << "Current day (should be Tuesday): " << specifiedDay.getDay() << std::endl;

    // Testing nextDay function
    std::cout << "Next day (should be Wednesday): " << specifiedDay.nextDay() << std::endl;

    // Testing previousDay function
    std::cout << "Previous day (should be Monday): " << specifiedDay.previousDay() << std::endl;

    // Testing addDays function with current day set to Monday
    specifiedDay.setDay(1); // Set to Monday
    std::cout << "Current day (set to Monday): " << specifiedDay.getDay() << std::endl;
    std::cout << "Adding 4 days (should be Friday): " << specifiedDay.addDays(4) << std::endl;

    // Testing addDays function with current day set to Tuesday
    specifiedDay.setDay(2); // Set to Tuesday
    std::cout << "Current day (set to Tuesday): " << specifiedDay.getDay() << std::endl;
    std::cout << "Adding 13 days (should be Monday): " << specifiedDay.addDays(13) << std::endl;

    return 0;
}