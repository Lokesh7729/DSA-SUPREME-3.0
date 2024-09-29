#include<iostream>
using namespace std;

int bruteForce(vector<int>&nums){
        for(int i=0; i<nums.size();i++){
            int lsum=0;
            int rsum=0;

            // find lsum excluding current 
            for(int j=0; j<i;j++){
                lsum= lsum+nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                rsum=rsum+nums[j];
            }
            if(lsum==rsum) return i;
        }
        return -1;
    }

int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int rightSum = getSum(nums);
        for (int i=0; i<nums.size();i++){
            rightSum= rightSum-nums[i];
            if(leftSum==rightSum) return i;
            leftSum= leftSum + nums[i];
        }
    return -1;
}

int getSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return sum;
    }


int main(){
    return 0;
}