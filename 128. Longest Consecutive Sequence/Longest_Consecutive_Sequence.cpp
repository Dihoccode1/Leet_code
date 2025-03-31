class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
         sort(nums.begin(),nums.end());
        int Max_length=1;
        int Current_length=1;
        for(int i=1;i<nums.size();i++)
            {
                if (nums[i] == nums[i - 1]) continue;
                if(nums[i]==nums[i-1]+1)
                    {
                        Current_length++;   
                    }
                else{
                    Max_length=max(Max_length,Current_length);
                     Current_length=1;
                }
            }
    return max(Max_length,Current_length);
    }
};
