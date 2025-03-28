class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int>table;
         int pointer1=0;
    int pointer2=0;
    while(pointer1<m && pointer2<n)
        {
            if(nums1[pointer1]<nums2[pointer2])
                {
                    table.push_back(nums1[pointer1++]);
                }
            else
            {
                table.push_back(nums2[pointer2++]);
            }
        }
    while(pointer1<m)
        {
            table.push_back(nums1[pointer1++]);
        }
    while(pointer2<n)
        {
            table.push_back(nums2[pointer2++]);
        }
        for(int i=0;i<table.size();i++)
        {
            nums1[i]=table[i];
        }
    }
};
