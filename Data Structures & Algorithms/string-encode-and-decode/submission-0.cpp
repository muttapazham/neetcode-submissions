class Solution {
public:

    string encode(vector<string>& strs) {
        string ones;
        for(string s : strs)
        {
            ones+=to_string(s.length());
            ones+='#';
            ones+=s;
        }
        return ones;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#') {j++;}
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+length;
            str.push_back(s.substr(i,length));
            i=j;
        }
        return str;
    }
};
