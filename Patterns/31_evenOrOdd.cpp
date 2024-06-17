#include<iostream>
using namespace std;

bool checkEven(int num){
    if ((num&1)==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num;
    cout<<"enter a number to check it is odd of even : ";
    cin>>num;
    bool result = checkEven(num);
    if (result)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    
}