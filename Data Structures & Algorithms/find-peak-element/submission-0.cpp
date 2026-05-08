class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(mid==0 && nums[mid]>nums[mid+1]) return mid;
            if(mid==nums.size()-1 && nums[mid]>nums[mid-1]) return mid;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
            return mid;
            else if(nums[mid]<nums[mid+1])
            left=mid+1;
            else
            right=mid-1;
        }
        return left;
    }
};