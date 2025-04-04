class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
  for(auto i:s)
  {
    mp[i]++;
  }
  for(auto i:s)
  {
    if(mp[i]==1)
    {
      return s.find(i);
  }
}
return -1;
    }
};
