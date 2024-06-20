#include<iostream>
using namespace std;

pair<int,int> printAllPairs(int arr[], int size,int target){
    pair<int,int>ans= make_pair(-1,-1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <size; j++)
        {
            // cout<<arr[i]<<","<<arr[j]<< " ";
            if (arr[i]+arr[j]==target)
            {
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }
            
        }
        cout<<endl; 
        
    }

    return ans;
}

void checkTwoSumPrintAllAnswers(int arr[],int n, int target){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            
        }
        
    }
    
}

void printAllTriplets(int arr[], int n, int target){
        int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                // if (arr[i]+arr[j]+arr[k]==target)
                // {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                    count++;
                // }
                
            }
            
        }
    }
        cout<<"total triplet count : "<<count;
    
}

void rotateArray(int arr[], int size, int n){
    // n-> n refers to the number of element by which we have to shift 
     n= n%size;

    if (n==0)
    {
        return;
    }
    // step 1: copy last finalShift elements into a temp array
    int temp[1000];
    int index=0;
    for (int i = size-n; i < size; i++)
    {
        temp[index]= arr[i];
        index++;
    }
    // step 2 : shift array elements by finalShift places
    
    for (int i = size-1; i >=0; i--)
    {
        arr[i]= arr[i-n];
    }

    // step 3 : copy temp elements into original array

    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    
    
    
}

int main(){

    int arr[]={10,20,30,40,50,60};
    int size=6;
    int n=2;

cout<<"Before : "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"After : "<<endl;
rotateArray(arr,size, n);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}





    // printAllTriplets(arr, size , target);

    // pair<int,int> ans = printAllPairs(arr, size,target);
    // if (ans.first==-1 && ans.second==-1)    
    // {
    //     cout<<"pair not found"<<endl;
    // }
    // else{
    //     cout<<"pair found: " << ans.first<<", "<<ans.second<<endl;
    // }

}