#include<iostream>
using namespace std;

int printAllPairs(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j >i; j--)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        cout<<endl; 
        
    }
    
}

int main(){

    int arr[]={10,20,30,40};
    int size=4;

    int ans =printAllPairs(arr, size);
    cout<<ans;
}