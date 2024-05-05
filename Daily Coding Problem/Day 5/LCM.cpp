#include<iostream>
using namespace std;

int main(){

    int num1,num2,i,hcf,lcm;
    cout<<"enter number 1 : ";
    cin>>num1;
    cout<<"enter number 2 : ";
    cin>>num2;

    for ( i = 1; i <=num1 && i<=num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf<<" is GCD of "<<num1<<" and "<<num2<<endl;

    lcm=num1*num2/hcf;
    cout<<lcm<<" is LCM of "<<num1<<" and "<<num2<<endl;
    

    return 0;
}