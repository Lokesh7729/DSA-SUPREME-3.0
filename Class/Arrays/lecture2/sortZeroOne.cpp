#include <iostream>
using namespace std;

void zeroOneCount(int arr[], int size){

    int low=0;
    int high= size-1;

    while (low<high)
    {
        if (arr[low]==1)
        {
            swap(arr[low],arr[high]);
            high--;
        }else{
            low++;
        }   
    }
}


int main()
{
    int arr[] = {1, 0, 1, 1, 0, 0, 0, 1};
    int size = 8;

    zeroOneCount(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}