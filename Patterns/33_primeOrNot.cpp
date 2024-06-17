#include<iostream>
using namespace std;

bool checkPrime(int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%2==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool isPrime= checkPrime(n);
    if (isPrime)
    {
       cout<<"prime";
    }
    else{
        cout<<"not Prime";
    }
    
}