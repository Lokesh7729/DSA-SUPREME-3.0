#include<iostream>
using namespace std;

void zero_one(int arr[], int n ){
    int zeroCount=0;
    int oneCount=0;

    // counting 
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zeroCount++;
        }
        if (arr[i]==1)
        {
            oneCount++;
        }
    }
    // insertion 

    for (int i = 0; i < zeroCount; i++)  // from 0 to zerocount 
    {
        arr[i]=0; 
    }
    for (int i = zeroCount; i < n; i++)  // from zercount to total size i.e n
    {
        arr[i]=1;
    }
}

int main(){

    int arr[]={1,0,1,0,0,0,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    zero_one(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}