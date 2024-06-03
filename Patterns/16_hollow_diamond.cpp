#include<iostream>
using namespace std;

void fullHollowPyramid(int n){

    for (int  row = 0; row < n; row++)
    {   
        // 1.> spaces
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        // 2.> stars
         for (int col = 0; col < row+1; col++)
         {
            if (row==0|| /*row==n-1|| */col==0 || col==row )
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
         }
            cout<<endl;
    }
    
}
void invertedHollowPyramid(int n){

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
            if (/*row==0 ||*/ row==n-1 || col==0|| col==n-row-1)
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
         }
            cout<<endl;
         
        
    }
    
}


int main(){
    int n;
    cin>>n;

    fullHollowPyramid(n);
    invertedHollowPyramid(n);
    return 0;
}
