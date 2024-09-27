#include<iostream>
using namespace std;


// * parameter approach 
// void fact(int n,int factorial){
//     if (n==0)
//     {
//         cout<<"factorial : "<<factorial;
//         return ;
//     }
//     fact(n-1,factorial*n);
// }

// * fucntional approach 

int fac(int n){
    if (n==0) return 1; // because if we reutrn a 0 whole function will become 0 
    return n * fac(n-1); 
}

int main(){
    int n; 
    cout<<"enter a number :";
    cin>>n;

    // fact(n,1);
    cout<<fac(n);
}

// ! TC -> O(n)
// ! SC -> O(n)