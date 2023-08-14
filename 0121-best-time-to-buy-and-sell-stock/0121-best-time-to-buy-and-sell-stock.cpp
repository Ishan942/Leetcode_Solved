class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=0;
        int curr;
        for(int i=1;i<prices.size();i++){
            curr=prices[i]-mini;
            maxi=max(curr,maxi);
            mini=min(prices[i],mini);
        }
        return maxi;
    }
};