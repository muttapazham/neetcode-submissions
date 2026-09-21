class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> v(nums1.size(),-1);
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
                for(int k=m[nums1[i]];k<nums2.size();k++)
                {
                    if(nums2[k]>nums1[i])
                    {
                    v[i]=nums2[k];
                    break;
                    }
                }
            }
        }
        return v;
    }
};