#include<iostream>
using namespace std;

int main(){

    int num1,num2,i,gcd; // Declare variables for the two numbers, loop counter, and GCD

    // Input: Prompt the user to enter two numbers
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    for (i = 1; i <= num1 && i <= num2; i++) { // Loop from 1 to the smaller of the two numbers

        // Check if both numbers are divisible by the current loop counter
        if (num1 % i == 0 && num2 % i == 0) { // If both are divisible

            gcd = i; // Update GCD to the current loop counter
            cout << gcd << endl; // Print the current GCD (common factor)
        }
    }

    // Output: Print the final calculated GCD
    cout << gcd << " is the GCD of " << num1 << " and " << num2;

    return 0;
}
