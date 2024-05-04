// Problem 2:
// Leap year - Program to find the year is leap year or not

#include<iostream>
using namespace std;

int main() {
    int year;

    // Step 1: Input
    cout << "Please enter the year: ";
    cin >> year;

    // Step 2: Leap Year Check
    // A year is a leap year if:
    // 1. It is divisible by 4, and not divisible by 100, or
    // 2. It is divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // Leap Year: If the year is a leap year, print that it is a leap year.
        cout << year << " is a leap year." << endl;
    } else {
        // Non-Leap Year: If the year is not a leap year, print that it is not a leap year.
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}