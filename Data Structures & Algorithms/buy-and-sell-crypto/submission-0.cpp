class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MAX;
        int ans=0;
        for(int i=0; i<prices.size(); i++)
        {
             maxi=min(maxi,prices[i]);
            ans=max(ans,prices[i]-maxi);
        }
        return ans;
    }
};
