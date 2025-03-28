class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0;
   int j=i+1;
   bool found=false;
while (i<nums.size() && j<nums.size())
{
    if(nums[j]==nums[i])
    {
       nums.erase(nums.begin()+i+1);
    }
    else
    {
        found=true;
        i=j;
        j++;
    }
}
        return nums.size();
    }
};
