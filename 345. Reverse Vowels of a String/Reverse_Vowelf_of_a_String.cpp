class Solution {
public:
bool isVowel(char ch)
{
    if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    return false;
    return true;
}
    string reverseVowels(string s)
{
vector<int>indexofVowels;
for(int i = 0; i < s.length(); i++)
{
    if(isVowel(s[i]))
    indexofVowels.push_back(i);
}
int start = 0;
int end = indexofVowels.size() - 1;
while(start < end)
{
    char temp = s[indexofVowels[start]];
    s[indexofVowels[start]] = s[indexofVowels[end]];
    s[indexofVowels[end]] = temp;
    start++;
    end--;
}
return s;
}
};
