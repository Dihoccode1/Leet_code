class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left_index=0;
        int right_index=nums.size()-1;
        while(left_index<=right_index)
        {
            int mid_index=(left_index+right_index)/2;
            if(target==nums[mid_index])
            {
                return mid_index;
            }
            else if(target<nums[mid_index])
            {
                right_index=mid_index-1;
            }
            else
            {
                left_index=mid_index+1;
            }
            }
        return -1;
    }
};
