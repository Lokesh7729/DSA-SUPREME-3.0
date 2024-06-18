#include <iostream>
#include<limits.h>
using namespace std;

int minNumber(int arr[], int size)
{
    int minAns = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        minAns = min(minAns, arr[i]);
    }
    return minAns;
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
    


    int ans = minNumber(arr, size);
    cout <<"min number is :"<< ans << endl;
}