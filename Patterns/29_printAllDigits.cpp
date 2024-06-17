#include<iostream>
using namespace std;

void printAllDigit(int n){
    
    while (n)
    {
        int onesPlaceDigit= n%10;
        cout<<"Digit: "<<onesPlaceDigit<<endl;
        n/=10;
        
    }
    
    }

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    printAllDigit(n);

}