class Solution {
public:
    int GreatestCommonDivisor(int a, int b)
    {
      while (b!=0)
      {
        int r=a%b;
        a=b;
        b=r;
      }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int maxElement=nums[0];
        int minElement=nums[0];
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>maxElement)
                {
                    maxElement=nums[i];
                }
                if(nums[i]<minElement)
                {
                    minElement=nums[i];
                }
            }
    return GreatestCommonDivisor(minElement,maxElement);
    return{};
    }
};
