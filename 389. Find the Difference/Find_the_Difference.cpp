class Solution {
public:
    char findTheDifference(string s, string t) {
         if(s=="")
        {
            return t[0];
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.length();i++)
            for(int j=0;j<s.length();j++)
                {
                    if(t[i]!=s[i])
                    {
                        return t[i];
                    }
                }
        return {};
    }
};
