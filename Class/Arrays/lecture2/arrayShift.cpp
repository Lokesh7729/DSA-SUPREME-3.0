#include<iostream>
using namespace std;


void shiftArray(int arr[],int size, int n){

    n = n % size;
    if (n==0)
    {
        return;
    }
    
    // step 1: storing values is temp
    int temp[10000];
    int index=0;
    for (int i = size-n; i < size; i++)
    {
        temp[index]=arr[i];
        index++;
    }

    // step 2: shifting 

    for (int i = size-1; i >=0; i--)
    {
        if (i-n>=0)
        {
             arr[i]=arr[i-n]; 
        }
    }

    // step 3: copy temp in original array
    
    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int n=3;
    cout<<"before:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" " ;
    }
    
    shiftArray(arr, size, n);
    cout<<endl<<"After: "<<endl;
      for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}