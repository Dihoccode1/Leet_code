class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>integer;
  for(int i=1;i<=n;i++)
  {
    integer.push_back(i);
  }
  vector<string>ans;
  for(int i=0;i<integer.size();i++)
  {
    ans.push_back(to_string(integer[i]));
  }
  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++)
  {
    integer[i]=stoi(ans[i]);
  }
  return integer;
    }
};
