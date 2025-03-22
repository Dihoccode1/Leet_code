class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_string;
        int pointer1=0;
        int pointer2=0;
        if(word1.length()==word2.length())
        {
            for(int i=0;i<word1.length();i++)
            {
                merged_string.push_back(word1[i]);
                 merged_string.push_back(word2[i]);
            }
        }
        else
        {
        while(pointer1<word1.length()&&pointer2<word2.length())
        {
            
                merged_string.push_back(word1[pointer1]);
                pointer1++;
                merged_string.push_back(word2[pointer2]);
                pointer2++;
        }
    while (pointer1<word1.length())
    {
         merged_string.push_back(word1[pointer1]);
         pointer1++;
    }
    while(pointer2<word2.length())
    {
 merged_string.push_back(word2[pointer2]);
                pointer2++;
    }
        }
    return merged_string;
    }
};
