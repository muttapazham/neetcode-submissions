class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int count=0;
        for(int j=nums.size();j>0;j--)
        {
            for(int i=0;i<nums.size();i++)
            {
            if(freq[nums[i]]==j)
            {
            arr.push_back(nums[i]);
            i=i+j-1;
            count++;
            if(count==k){return arr;}
            }

        }
        }
        return arr;
    }
};
