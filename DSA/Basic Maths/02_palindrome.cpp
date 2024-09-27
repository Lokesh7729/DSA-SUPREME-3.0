#include<iostream>
using namespace std;

int main(){
    // 121 -> 121 -? (reverse of a number)

    int n ;
    cout<<"enter a number to check palindrome : ";
    cin>>n;
    int p=n;
    int lastDigit=0;
    int reverse=0;
    while (n>0)
    {
        lastDigit= n%10;
        // cout<<lastDigit;
        reverse= reverse*10 + lastDigit;
        n=n/10;
    }
    // cout<<reverse;
    if (reverse==p) 
    {
        cout<<"Number is palindrome "<<reverse;  
    }else{
        cout<<"Number is not palindrome";
    }
    
}