class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,int> strings;
        unordered_map<char,int> stringt;
        for(int i=0;i<s.length();i++)
        {
        strings[s[i]]++;
        stringt[t[i]]++;
        }
        return strings==stringt;
    }
};
