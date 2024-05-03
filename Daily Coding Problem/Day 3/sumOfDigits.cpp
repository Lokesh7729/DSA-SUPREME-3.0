// Problem 1:
// Sum of digits - Find sum of digits of a number

#include<iostream>
using namespace std;


int main(){
    int number;
    int sum=0;
    cout<<"Enter a Number : ";
    cin>>number;

while (number!=0)
    {
        int digit= number%10; // get the last digit
        sum=sum+digit;        // add the digit to the sum
        number=number/10;     // remove the last digit from the number
    }

    cout<<"Sum of digit is : "<<sum<<endl;
    return 0;
}
