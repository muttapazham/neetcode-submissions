class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]==target) return 0;
        if(nums.size()==1 && nums[0]!=target) return -1;
        int n=0,min=INT_MAX;
        vector<pair<int,int>> v(nums.size(),{0,0});
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min)
            {
                n=i;
                min=nums[i];
            }
        }
        int i=n,j=0;
        
        while(i<nums.size())
        {
           v[j]={nums[i],i};
           j++;
           i++;
        }
        i=0;
        while(i<n)
        {
            v[j]={nums[i],i};
            j++;
            i++;
        }
        //binary search
        int left=0,right=nums.size()-1,mid=0;
        if(v[left].first==target) return v[left].second;
        if(v[right].first==target) return v[right].second;
        while(left<right)
        {
            mid=(left+right)/2;
            if(v[mid].first==target)
            {
                return v[mid].second;
                
            }
            else if(v[mid].first<target)
            left=mid+1;
            else
            right=mid;
        }
        if(v[left].first==target) return v[left].second;
        return -1;
    }
};