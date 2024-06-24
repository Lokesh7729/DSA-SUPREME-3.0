#include <iostream>
using namespace std;

void populate(int arr[], int n){
    int j = 0; // Initialize j to 0 to use as an index for the first part of the array
    for(int i = 0; i < n; i = i + 2){ // Loop from 0 to n-1 with a step of 2
        arr[n - j-1] = i + 2; // Place even number (i+2) in the reverse position of the array
        arr[j] = i + 1; // Place odd number (i+1) in the forward position of the array
        j++; // Increment j for the next iteration
    }
}

int main() {
    int ar[1200]={1,2,3,4,5};
    cout<<ar<<" "<<&ar<<" "<< &ar[0];
    int n = 10; // Example size of the array
    int arr[n]; // Declare an array of size n
    populate(arr, n); // Call the populate function
    for(int i = 0; i < n; i++) { // Loop to print the populated array
        cout << arr[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a new line at the end
    return 0;
}


