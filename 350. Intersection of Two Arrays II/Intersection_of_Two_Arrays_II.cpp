class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int>ans;
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
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
      return ans;
    }
};
