class Solution {
public:
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
    //    return sortNumber(nums);
    return xorr(nums);
        
    }
};

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int ansIndex=-1;
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            int number = arr[mid];
            int index=mid;
            int diff = number - index;
            if(diff==0){
                //ans in right
                s=mid+1;
            }
            else if( diff==1){
                //index you are at, may or may not be ans
                ansIndex=index;
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        //for extreme right element missing case, we are hardcoding as below
        if (ansIndex==-1){
            return n;
        }       
        return ansIndex;
    }
};