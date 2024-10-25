// brute force
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == 0 && nums[j] != 0)
                {
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};
// brute strive 
class Solution
{
public:
    void moveZeroes(vector<int> &arr)
    {
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                temp.push_back(arr[i]);
            }
        }

        for (int i = 0; i < temp.size(); i++)
        {
            arr[i] = temp[i];
        }

        for (int i = temp.size(); i < arr.size(); i++)
        {
            arr[i] = 0;
        }
    }
};
// optimal 
