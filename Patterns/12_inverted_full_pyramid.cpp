#include<iostream>
using namespace std;

void invertedPyramid(int n){

    for (int  row = 0; row < n; row++)
    {   
        // 1.> spaces
        for (int col = 0; col < row; col++)
        {
            cout<<" ";
        }
        // 2.> stars
         for (int col = 0; col < n-row; col++)
         {
            cout<<"* ";
         }
            cout<<endl;
         
        
    }
    
}

int main(){
    int n;
    cin>>n;

    invertedPyramid(n);
    return 0;
}