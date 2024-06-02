/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){ // have to use <= 
        int j = i,count = 1;
        while(count<=i){ // have to use <= 
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}