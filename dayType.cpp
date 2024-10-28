// dayType.cpp
// This file contains the implementation of the dayType class.

#include "dayType.h"
#include <iostream>

// Initialize the static array of days
const std::string dayType::daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Default constructor
dayType::dayType() : currentDay(0) {}

// Parameterized constructor
dayType::dayType(int dayIndex) {
    currentDay = (dayIndex >= 0 && dayIndex <= 6) ? dayIndex : 0;
}

// Set day based on index
void dayType::setDay(int dayIndex) {
    if (dayIndex >= 0 && dayIndex <= 6) {
        currentDay = dayIndex;
    }
}

// Get the current day as a string
std::string dayType::getDay() const {
    return daysOfWeek[currentDay];
}

// Print the current day
void dayType::printDay() const {
    std::cout << getDay() << std::endl;
}

// Get the next day
std::string dayType::nextDay() const {
    return daysOfWeek[(currentDay + 1) % 7];
}

// Get the previous day
std::string dayType::previousDay() const {
    return daysOfWeek[(currentDay + 6) % 7];
}

// Add days and return the resulting day
std::string dayType::addDays(int n) const {
    int newDay = (currentDay + n) % 7;
    if (newDay < 0) newDay += 7; // handle negative values
    return daysOfWeek[newDay];
}