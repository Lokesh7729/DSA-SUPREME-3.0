#include<iostream>
using namespace std;

pair<int,int> twoSum(int arr[], int n, int target){
    // assume -1 ,-1 as no answer  found
    pair<int,int>ans=make_pair(-1,-1);
    // check all pairs 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                // found a pair that sums to target 
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }   
        }
    }
    return ans;

}

int main(){
    int arr[]={10,20,30,40,5,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target=35;
    pair<int,int> ans= twoSum(arr,size,target);
    if (ans.first==-1 && ans.second==-1)
    {
        cout<<"pair not found";
    }else{
        cout<<"pair found "<< ans.first<<","<<ans.second<<endl;
    }
    
}