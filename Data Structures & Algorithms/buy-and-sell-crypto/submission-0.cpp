class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=0;
        int l=0;
        while(i<prices.size()-1)
        {
            j=i;
        while(j<prices.size())
        {
            if(prices[j]>prices[i])
            l=max(l,prices[j]-prices[i]);
            j++;
        }
        i++;
        }
        return l;
    }
};
