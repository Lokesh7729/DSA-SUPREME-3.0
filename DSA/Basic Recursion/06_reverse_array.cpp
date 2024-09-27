// reverse an array 

#include<iostream>
using namespace std;

void arrayReverse(int arr[], int start, int end){

    while (start < end )
    {   
        swap(arr[start++],arr[end--]);
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size= sizeof(arr) / sizeof(arr[0]);

    arrayReverse(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}