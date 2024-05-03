// Problem 1:
// Reverse the digits - Find the reverse of digits of a number

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int num=number;
    int reverse=0;

    while (number!=0)
    {
        int digit = number % 10;         // get last digit 
        reverse = reverse * 10 + digit; //Append the last digit to the reversed number
        number = number / 10;           //Remove the last digit from the original number
    }

    cout<<"Reversed digit of "<< num<<" is "<<reverse<<endl;
    return 0;
}