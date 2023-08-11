class Solution {
public:
    int f(int index,int tar,vector<int>&coins,vector<vector<int>>& dp){
        if(index==0){
            return tar%coins[index]==0;
        }
        int not_take=f(index-1,tar,coins,dp);
        int take=0;
        if(dp[index][tar]!=-1){
            return dp[index][tar];
        }
        if(coins[index]<=tar){
            take=f(index,tar-coins[index],coins,dp);
        }
        return dp[index][tar]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size()-1;
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return f(n,amount,coins,dp);
    }
};