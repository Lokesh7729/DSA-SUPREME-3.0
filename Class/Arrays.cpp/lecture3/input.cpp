#include<iostream>
using namespace std;


int main(){

    int arr[2][3];
    int rowSize=2;
    int colSize=3;

    // taking input -> row wisee

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout<<"enter the value of "<<"("<<i<<" , "<<j<<" ) :";
            cin>>arr[i][j];
        }
        
    }

    cout<<"printing 2d array : "<<endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}