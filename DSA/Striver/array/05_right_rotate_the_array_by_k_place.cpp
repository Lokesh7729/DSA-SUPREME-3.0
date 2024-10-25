#include<iostream>
using namespace std;
#include<vector>

/* 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n= nums.size(); 
    k= k%n;
    if(k==0){
        return;
    }
    
    // storing to temp variable 
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[i-(n-k)]=nums[i];
    }
    // shifting 
    for(int i=n-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    // putting back temp 
    for(int i = 0;i<k;i++){
        nums[i]=temp[i];
    }

    }
};
*/

