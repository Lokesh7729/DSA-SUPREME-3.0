#include<iostream>
using namespace std;

int sortNumber(vector<int>&nums){
    sort(nums.begin(),nums.end());

    for (int i=0 ;i <nums.size();i++){
        if(i==nums[i]) continue;
        else return i;
    }  
return nums.size();
}

int missingNumber(vector<int>& nums) {
    // passig an array [5,4,2,1];
    return sortNumber(nums);
        
}
