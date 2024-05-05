#include<iostream>
using namespace std;

int main(){

    int num1, num2, i, hcf, lcm; // Declare variables for the two numbers, loop counter, HCF, and LCM

    // Input: Prompt the user to enter two numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    // Loop to find the Highest Common Factor (HCF)
    for (i = 1; i <= num1 && i <= num2; i++) { // Loop from 1 to the smaller of the two numbers

        // Check if both numbers are divisible by the current loop counter
        if (num1 % i == 0 && num2 % i == 0) { // If both are divisible
            hcf = i; // Update HCF to the current loop counter
        }
    }

    // Calculate LCM using formula: LCM = (num1 * num2) / HCF
    lcm = (num1 * num2) / hcf;

    // Output: Print the calculated LCM
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}
