class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> hashMap;
    for(int i=0;i<nums.size();i++)
    {
        int element=target-nums[i];
            if(hashMap.find(element)!=hashMap.end())
            {
                return {hashMap[element],i};
            }
            else{
                hashMap[nums[i]]=i;
            }
    }
    return {};
}
};
