#include<iostream>
using namespace std;

int main (){


    // cout<<"and: "<<(5&3)<<endl;
    // cout<<"or: "<<(5|3)<<endl;
    // cout<<"not: "<<(~5)<<endl;
    // cout<<"xor: "<< (5^5^9)<<endl;
    // cout<<"left shift : "<<(25<<1)<<endl;
    // cout<<"right shift : "<<(100>>1)<<endl;
    // cout<<"right shift : "<<(100>>100)<<endl;
    

    //  even odd
    int n=190;
    if (n&1)
    {
        cout<<"odd number";
    }
    else {
        cout<<"even number";
    }
    

    // set bit 

    int number=7;
    int setBitCount=0;
    
    while (number !=0)
    {
        int lastbit=(number&1);
        if (lastbit == 1 )
        {
            setBitCount=setBitCount+1;
        }
        
        // right shift
        number=number>>1;
    }
    
    cout<<"total set bits count : "<< setBitCount<<endl;



    return 0;
}