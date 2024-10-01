 #include<iostream>   
 using namespace std;
 #include<vector>

 // remove duplicates 
    
int removeDuplicates(vector<int>& nums) {
    int i=1, j=0;
    while(i< nums.size()){
        if(nums[i]==nums[j]) i++;
        else nums[++j]=nums[i++];
    }
    return j+1;
        
}