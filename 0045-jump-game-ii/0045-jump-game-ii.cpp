class Solution {
public:

    int count_jumps(vector<int> &arr ,int n,int m,vector<int> &dp){
        if(dp[m]!=INT_MIN){
            return dp[m];
        }
        if(arr[m]==0){
            return -1;
        }
        if(m==n-1){
            return 0;
        }
        int mini=INT_MAX;
        int x;
        for(int i=1;i<=arr[m];i++){
            if(arr[m]+m>=n-1){
                return 1;
            }
            if(m+i<n){
                 x=count_jumps(arr,n,m+i,dp);
                 if(x!=-1){
                     mini=min(x+1,mini);
                 }
                 
            }
            
        }
        return dp[m]=(mini == INT_MAX) ? -1 : mini;
    }
    int jump(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        vector<int> dp(nums.size()-1,INT_MIN);
        return count_jumps(nums,nums.size(),0,dp);
    }
};