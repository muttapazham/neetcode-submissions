class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> m;
        m.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(m[m.size()-1][1]>=intervals[i][0])
            {
                m[m.size()-1][1]=max(intervals[i][1],m[m.size()-1][1]);
            }
            else if(intervals[i][0]>m[m.size()-1][1])
            {
            vector<int> v={0,0};
            v[0]=intervals[i][0];
            v[1]=intervals[i][1];
            m.push_back(v);
            }
        }
        return m;
    }
};
