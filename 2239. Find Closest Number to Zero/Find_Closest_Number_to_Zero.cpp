class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector <int> Abs;
        for(int i=0;i<nums.size();i++)
            Abs.push_back(abs(nums[i]));
        vector <int> Store;
        sort(Abs.begin(),Abs.end());
        int Min_value=Abs[0];
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])==Min_value)
            {
                Store.push_back(nums[i]);
            }
        }
        int Max_element=Store[0];
        for(int i=0;i<Store.size();i++)
        {
            if(Max_element<Store[i])
            {
                Max_element=Store[i];
            }
        }
        return Max_element;
        return {};
    }
};
