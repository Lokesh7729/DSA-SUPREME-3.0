#include<iostream>
using namespace std;

int main(){

    // 371 -> 3^3 + 7^3 + 1^3

    int num;
    cout<<"enter the number to check armstrong number :";
    cin>>num;
    int dup=num;
    int lastDigit=0;
    int sum=0;
    int rev=0;

    while (num>0)
    {
        lastDigit = num%10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        rev= rev*10+lastDigit;
        num=num/10;


    }

    if (sum==dup)
    {
        cout<<"Armstrong Number";
    }else{
         cout<<"Not Armstrong Number";
    }
    

    


}