class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
        return 0;
        unordered_set<char> a;
        int i=0,j=1,count=1,c=1;
        a.insert(s[i]);
        while(i<j && j<s.size())
        {
            while(a.find(s[j])!=a.end() && i<j)
            {
                count--;
                a.erase(s[i]);
                i++;
            }
            a.insert(s[j]);
            j++;
            count++;
            c=max(c,count);
        }
        return c;
    }
};
