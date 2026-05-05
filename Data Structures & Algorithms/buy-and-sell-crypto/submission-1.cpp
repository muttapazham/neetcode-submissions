class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minp=INT_MAX;
        int i=0;
        while(i<prices.size())
        {
            if(prices[i]<minp)
            minp=prices[i];
            if(prices[i]-minp>profit)
            profit=prices[i]-minp;
        i++;
        }
        return profit;
    }
};
