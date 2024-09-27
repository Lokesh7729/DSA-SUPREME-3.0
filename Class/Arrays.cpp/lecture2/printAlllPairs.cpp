
#include<iostream>
using namespace std;

int printAllPairs1(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        
    cout<<endl;
    }
}

int printAllPairs2(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        
    cout<<endl;
    }
}

int printAllPairs3(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        
    cout<<endl;
    }
}

int printAllPairs4(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j >= 0; j--)
        {
            cout<<arr[i]<<","<<arr[j]<< " ";
        }
        
    cout<<endl;
    }
}
int printAllPairs5(int arr[], int size){
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

    // int ans1 =printAllPairs1(arr, size);
    // int ans2 =printAllPairs2(arr, size);
    // int ans3 =printAllPairs3(arr, size);
    // int ans4 =printAllPairs4(arr, size);
    int ans5 =printAllPairs5(arr, size);
    // cout<<ans2;
}