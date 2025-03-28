class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis(nums.size(),1);
        for(int i=0;i<nums.size();i++)
            {
                for(int j=0;j<i;j++)
                    {
                        if(nums[i]>nums[j])
                            {
                                lis[i]=max(lis[i],lis[j]+1);
                            }
                    }
            }
        int max_length=lis[0];
        for(int i=0;i<lis.size();i++)
            {
                if(max_length<lis[i])
                    {
                        max_length=lis[i];
                    }
            }
        return max_length;
    }
};
