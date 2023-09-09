class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,1);
        vector<int> postfix(n,1);
        int presum=1;
        int postsum=1;
        for(int i=0;i<n;i++){
            presum*=nums[i];
            prefix[i]=presum;
            postsum*=nums[n-1-i];
            postfix[n-1-i]=postsum;
        }
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            if(i>0){
                ans[i]*=prefix[i-1];
            }
            if(i<n-1){
                ans[i]*=postfix[i+1];
            }
            
        }
        return ans;
    }
};