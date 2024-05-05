#include<iostream>
using namespace std;

int main(){

    int num1,num2,i,gcd;
    cout<<"enter number 1 : ";
    cin>>num1;
    cout<<"enter number 2 : ";
    cin>>num2;

    for ( i = 1; i <=num1 && i<=num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd=i;
            cout<<gcd<<endl;
        }
    }
    cout<<gcd<<" is gcd of "<<num1<<" and "<<num2;
    
    return 0;
}