class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size(),count=0;
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j] && j!=i)
                {
                    count++;
                break;
                }
            }
        }
        if(count!=0)
        return true;
        else
        return false;        
    }
};