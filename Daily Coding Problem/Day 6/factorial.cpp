#include<iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1; // Initialize factorial to 1, as factorial of 0 is 1

    // Step 1: Input - Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Step 2: Edge case check - if the number is negative, print error message and exit
    if (num < 0) {
        cout << "Factorial of a negative number is undefined.";
        return 1; // Exit the program with error code 1
    }

    // Step 3: Calculate factorial - Loop from 1 to num and multiply each number to factorial
    for (int i = 1; i <= num; ++i) {
        factorial *= i; // Multiply factorial by the current number (i)
    }

    // Step 4: Output - Print the calculated factorial
    cout << "Factorial of " << num << " is: " << factorial;

    return 0;
}
