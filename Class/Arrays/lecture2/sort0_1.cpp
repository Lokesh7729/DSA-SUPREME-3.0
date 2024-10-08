#include <iostream>
using namespace std;
#include<algorithm>

int countZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // insertion

    // fill(arr,arr+zeroCount,0);
    // fill(arr+zeroCount,arr+size,1);

    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }   
    for (int i = zeroCount; i < size; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    int size = 7;

    int ans = countZeroOne(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}