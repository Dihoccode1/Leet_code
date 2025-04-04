class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>ans;
    int point1=0,point2=0;
    while(point1<nums1.size()&&point2<nums2.size())
    {
        if(nums1[point1]==nums2[point2])
        {
            ans.push_back(nums1[point1]);
            point1++;
            point2++;
        }
        else if(nums1[point1]<nums2[point2])
        {
            point1++;
        }
        else
        {
            point2++;
        }
    }
    set<int>s(ans.begin(),ans.end());
    ans.assign(s.begin(),s.end());
    return ans;
    }
};
