// Find nth Fibonacci Number of a given number

#include <iostream>
using namespace std;

int main()
{
    int num;
    int a = 0, b = 1, c; // Initialize variables a, b, and c for Fibonacci sequence
    cout << "Enter a number: ";
    cin >> num;

    // Base Case Check: If num is 0 or 1, print num as the Fibonacci number and exit
    if (num == 0 || num == 1)
    {
        cout << "The Fibonacci number for " << num << " is: " << num << endl;
    }
    else
    {
        // Fibonacci Calculation: If num > 1, enter the else block
        for (int i = 2; i <= num; i++) // Loop to calculate Fibonacci number iteratively
        {
            c = a + b; // Calculate the next Fibonacci number by adding the previous two numbers
            cout<<c<<" "; // for printing ficonacci series we can do this
            a = b;     // Update the value of a to the previous value of b
            b = c;     // Update the value of b to the newly calculated Fibonacci number
        }
        // Output: Print the calculated Fibonacci number for the given input num
        cout<<endl<< "The Fibonacci number for " << num << " is: " << c << endl;
    }
    return 0;
}
