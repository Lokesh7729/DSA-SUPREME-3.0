#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int n){
    n= n % size;
    int temp[100];
    int index=0;
    //copy last elements in temp array 
    for (int i = size-n; i < size; i++){
        temp[index]=arr[i];
        index++;
    }
    // shifting array elements by final shift
    for (int i = size-1; i >0; i--)
    {
        if (i-n>=0)
        {
        arr[i]=arr[i-n];
        }
        
    }

    // copy temp elements into original array
    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int size= 5;
    // rotate array by two places 
    int n=2;

    cout<<"Before : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    rotateArray(arr,size,n);

    // print array
    cout<<"After : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}