class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ga;
        for(string s : strs)
        {
            string sorteds = s;
            sort(sorteds.begin(),sorteds.end());
            ga[sorteds].push_back(s);
        }
       vector<vector<string>> res;
       for(auto& c : ga)
       {
        res.push_back(c.second); 
       }
       return res;
    }
};
