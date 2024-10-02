#include<iostream>
using namespace std;

bool findTarget(int arr[], int size, int target){
    // traverse the entire array
    for (int i = 0; i < size; i++)
    {
        int currentElement= arr[i];
        if (currentElement==target)
        {
            // found
            return true;
        }
        
    }
    return false;
    

}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int target =60;
    int result=findTarget(arr,size,target);
    cout<<"result: "<<result<<endl;

}