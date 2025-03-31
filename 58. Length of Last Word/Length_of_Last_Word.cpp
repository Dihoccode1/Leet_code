class Solution {
public:
vector<string>splitword(string str)
{
    vector<string> words;
    stringstream ss(str);
    string word;
    while (ss>>word)
        {
            words.push_back(word);
        }
    return words;
}
    int lengthOfLastWord(string s) {
       vector<string>Splited_word_in_string=splitword(s);
      return Splited_word_in_string.back().size();
    }
};
