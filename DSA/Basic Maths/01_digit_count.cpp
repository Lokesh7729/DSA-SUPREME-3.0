#include<iostream>
using namespace std;
 
int main(){

int n = 7789;
int lastDigit=0;
int reverse=0;
// int digit =0; // count number of digits 

while (n>0)
{
    lastDigit= n%10;
    // digit++;
    // cout<<lastDigit;
    reverse= reverse*10+lastDigit;
    n=n/10;
    
}

cout<<reverse<<endl;



}