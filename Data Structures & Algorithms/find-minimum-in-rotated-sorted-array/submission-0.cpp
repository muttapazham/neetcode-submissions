class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid=0;
        if(nums.empty()) return -1;
        if(left==right) return nums[left];
        while(left<right)
        {
            mid=(left+right)/2;
            if(mid==right) break;
            if(nums[mid]<nums[right])
            right=mid;
            else
            left=mid+1;
        }
        return nums[left];
    }
};