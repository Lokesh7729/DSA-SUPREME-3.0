#include<iostream>
using namespace std;

// pair<int,int>solve(int arr[], int n , int target){
//     pair<int,int> ans= make_pair(-1,-1);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//            if (arr[i]+arr[j]==target)
//            {
//             ans.first= arr[i];
//             ans.second= arr[j];
//            return ans;
//            }
//         }
        
//     }
//     return ans;
// }
    void printAllTriplets(int arr[], int n , int target){
        int count=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
          for (int k = 0; k < n; k++)
          {
             if (arr[i]+arr[j]+arr[k]==target)
            {
                count++;
                cout<< arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
          
          
           }
    }
    cout<<count;
    }

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    printAllTriplets(arr, n ,50);

    // pair<int,int> ans= solve(arr,n,60);
    // pair<int,int> ans= threepair(arr,n,60);


    // if (ans.first==-1 && ans.second==-1)
    // {
    //     cout<<"pair not found "<<endl;
    // }else{
    //     cout<<"pair found "<< ans.first << " , " << ans.second<<endl;
    // }

}