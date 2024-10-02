#include <iostream>
#include<limits.h>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left=0;
    int right=size-1;

    while (left<=right){

        if (left==right)
        {
            cout<<arr[left]<<" ";
            break;
        }
        else{
            cout<<arr[left]<<" ";
        left++;
        cout<<arr[right]<<" ";
        right--;
        }
    }
}
int main()
{
    int size;
    int arr[100];
    cout<<"enter size :";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the input value of "<<i<<" :";
        cin>>arr[i];
    }
    extremePrint(arr, size);
    
}