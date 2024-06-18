#include <iostream>
#include<limits.h>
using namespace std;

int maxNumber(int arr[], int size)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxAns = max(maxAns, arr[i]);
    }
    return maxAns;
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
    


    int ans = maxNumber(arr, size);
    cout <<"max number is :"<< ans << endl;
}