class Solution {
public:
    bool canJump(vector<int>& nums) {
           int max_jump=0;
    for(int i=0;i<nums.size();i++)
    {
            if(i>max_jump)
            {
                    return false;
            }
            else
            {
                    max_jump=max(max_jump,i+nums[i]);
                    if(max_jump>=nums.size()-1)
                    {
                            return true;
                    }
            }
    }
    return false;
    }
};
