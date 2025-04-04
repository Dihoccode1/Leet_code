class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool>ans;
    int max_Candies=*max_element(candies.begin(),candies.end());
    if(candies[0]+extraCandies>=max_Candies)
    {
        ans.push_back(true);
    }
    else
    {
        ans.push_back(false);
    }
    for(int i=1;i<candies.size();i++)
    {
        if(candies[i]+extraCandies>=max_Candies)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
return ans;
    }
};
