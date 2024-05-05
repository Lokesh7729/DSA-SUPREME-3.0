#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    bool isPrime = true; // Assume the number is prime initially

    // Step 1: Input - Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Step 2: Edge case check - Prime numbers are greater than 1
    if (num <= 1) {
        isPrime = false; // If number is 1 or less, it's not prime
    } else {
        // Step 3: Prime check - Loop from 2 to square root of num
        // If num is divisible by any number in this range, it's not prime
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false; // If num is divisible by i, it's not prime
                break; // No need to check further, exit the loop
            }
        }
    }

    // Step 4: Output - Print whether the number is prime or not
    if (isPrime) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }

    return 0;
}
