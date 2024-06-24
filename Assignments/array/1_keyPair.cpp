#include<iostream>
#include<algorithm>
using namespace std;

bool keyPair(int arr[],int size, int target){
      sort(arr,arr+size);
    int l=0;
    int h=size-1;
    while (l<h)
    {
        int cSum=arr[l]+arr[h];
        if (cSum==target)
        {
            return true;
        }
        else if (cSum>target)
        {
            h--;
        }else{
            l++;
        }
    }
    return false;
    
}

int main(){
    int arr[]={1,2,4,5,6,10,8};
    int size=7;

    int target=11; 
  
    bool ans=keyPair(arr,size,target);
    cout<<ans;
}