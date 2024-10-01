#include<iostream>
using namespace std;

// 
int sortNumber(vector<int>&nums){
    sort(nums.begin(),nums.end());

    for (int i=0 ;i <nums.size();i++){
        if(i==nums[i]) continue;
        else return i;
    }  
return nums.size();
}

int xorr(vector<int>nums){
    int ans= 0 ;
    // xor all values of array
    for(int i=0; i<nums.size();i++){
        ans ^= nums[i];
    }
    // xor all range items [0,n]
    for(int i=0; i <= nums.size();i++){
        ans^= i;
    }
    return ans;
}

int missingNumber(vector<int>& nums) {
    // passig an array [5,4,2,1];
    return sortNumber(nums);
        
}
