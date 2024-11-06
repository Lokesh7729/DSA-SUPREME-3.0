// single number - 136
// xor method 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n= nums.size();

        for(int i = 0;i <n;i++){
            ans = ans^ nums[i];
        }
        
    }
};
// sorting method
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=-1;
        int n= nums.size();
        int i=0;
        while(i<n){
            if(i+1<n && nums[i]== nums[i+1]){
                i+=2;
            }else{
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
