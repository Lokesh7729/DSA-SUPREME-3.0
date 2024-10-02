#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={
        {10,20,100},
        {30,40,200},
        {50,60,300}
    };
    int rowSize=3;
    int colSize=3;

    // for (int i = 0; i < colSize; i++)
    // {
    //     for (int j = 0; j < rowSize; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    // diagonal matrix -> square matrix 

    // for (int i = 0; i < rowSize; i++)
    // { 
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         if (i==j)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //         cout<<endl;
        
    // }


// using single loop

    for (int i = 0; i < rowSize; i++)
    {
        cout<<arr[i][i]<<" ";
    }
    
    
}