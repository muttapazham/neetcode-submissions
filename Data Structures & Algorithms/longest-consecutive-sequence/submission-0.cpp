class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr(nums.begin(),nums.end());
        int longest=0;
        for(int num:arr)
        {
            if(!arr.count(num-1))
            {
                int length=1;
                while(arr.count(num+length))
                {
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
