// * Print linearly from 1 to N (by Back Tracking )

#include<iostream>
using namespace std;

void fun(int i, int n) {
    // Base case: if i becomes less than 1, stop the recursion
    if (i < 1) {
        return; // Exit the function when i is less than 1
    }
    fun(i - 1, n); 
    // Recursive call: decrease i by 1 and call the function again.
    // This means the function keeps going deeper until i reaches 1.

    cout << i << endl; 
    // After the recursive call, print the current value of i.
    // Since this happens after the recursive call, the values of i are printed in increasing order.
}

int main() {
    int n = 10; 
    // Initialize n to 10

    fun(n, n); 
    // Call the recursive function 'fun' with i = n and n = n (i.e., i = 10)
    
    return 0;
}
