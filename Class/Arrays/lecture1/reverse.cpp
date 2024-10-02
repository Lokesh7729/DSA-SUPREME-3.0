#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int l=0,r=n-1;

    for (int i = 0; i < n; i++)
    {
        while (l < r)
             swap(arr[l++],arr[r--]);
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

}