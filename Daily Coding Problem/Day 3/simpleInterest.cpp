// Problem 2:
// Simple Interest - Take all values as input from user and calculate Simple Interest

#include<iostream>
using namespace std;

int simpleInterst(int principal, int rate, int time){
    return (principal*rate*time)/100;
};
int main(){

    int principal,rate,time;
    cout<<"enter principal : ";
    cin>>principal;
    cout<<"enter rate : ";
    cin>>rate;
    cout<<"enter time : ";
    cin>>time;

    int SI = simpleInterst(principal,rate,time);
    cout<<SI;
     
    return 0;
}