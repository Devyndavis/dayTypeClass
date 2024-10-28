// dayType.h
// This header file defines the dayType class which represents the days of the week.
// It includes member functions to set, get, print, calculate the next and previous days,
// and add a specified number of days to the current day. Preconditions and postconditions
// are included for each public function.

#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
public:
    // Default constructor
    // Preconditions: None.
    // Postconditions: Initializes currentDay to 0 (Sunday).
    dayType();

    // Parameterized constructor
    // Preconditions: dayIndex must be in range [0, 6].
    // Postconditions: Sets currentDay to dayIndex if valid, otherwise sets to 0 (Sunday).
    dayType(int dayIndex);

    // Sets the current day
    // Preconditions: dayIndex must be in range [0, 6].
    // Postconditions: currentDay is updated to dayIndex if valid, unchanged otherwise.
    void setDay(int dayIndex);

    // Returns the current day as a string
    // Preconditions: None.
    // Postconditions: Returns the name of the day corresponding to currentDay.
    std::string getDay() const;

    // Prints the current day to the console
    // Preconditions: None.
    // Postconditions: Outputs the current day’s name based on currentDay.
    void printDay() const;

    // Returns the next day as a string
    // Preconditions: None.
    // Postconditions: Returns the next day, cycling to Sunday after Saturday.
    std::string nextDay() const;

    // Returns the previous day as a string
    // Preconditions: None.
    // Postconditions: Returns the previous day, cycling to Saturday before Sunday.
    std::string previousDay() const;

    // Adds n days to the current day and returns the result as a string
    // Preconditions: None.
    // Postconditions: Returns the day after adding n days, cycling through the week as needed.
    std::string addDays(int n) const;

private:
    int currentDay;
    static const std::string daysOfWeek[7];
};

#endif