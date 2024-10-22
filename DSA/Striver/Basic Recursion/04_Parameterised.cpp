// * Parameterised and Functional Recursion

// ?  Submission of first N numbers
// 1> parameter     2> functional 

#include<iostream>
using namespace std;

void para(int i , int sum){
    if (i<1)
    {
        cout<<sum;
        return;
    }
    
    para(i-1,sum+i);
}

// Fuctional 
int sum(int n){
    if (n==0) return 0; 
    return n + sum(n-1); // * wait until the value of n becomes 0
}
int main(){
    int n;
    cin>>n;
    // para(n,0);
    cout << sum(n);
}


