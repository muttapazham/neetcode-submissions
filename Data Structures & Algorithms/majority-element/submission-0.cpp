class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int a:nums)
        {
            freq[a]++;
            if(freq[a]>nums.size()/2)
            return a;
        }
        return 0;
    }
};