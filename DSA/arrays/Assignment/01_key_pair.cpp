#include<iostream>
using namespace std; 
// brute force 
bool keyPair(int  arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}

// two pointer approach 
bool keyPairTwoPointer(int arr[], int n, int x){
    int l=0;
    int h= n-1;
    while (l < h)
    {
        int csum= arr[l]+arr[h];
        if (csum == x){
             cout << "Pair found: (" << arr[l] << ", " << arr[h] << ")\n";
            return true;
       } else if (csum > x) {
            h--;
        } else {
            l++;
        }
    }
    return false;
}
int main(){

    int arr[]={1,4,45,6,10,8}; 
    int n= sizeof(arr)/ sizeof(arr[0]);
    int x=16;
    // short the array first 
    sort(arr,arr+n);

    // bool ans= keyPair(arr,n,x);
    bool ans2= keyPairTwoPointer(arr,n,x);
    if (ans2)
        cout << "Pair exists that sums to " << x << "\n";
    else
        cout << "No such pair exists.\n";

    return 0;


}