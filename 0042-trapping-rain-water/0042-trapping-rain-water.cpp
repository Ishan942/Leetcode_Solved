class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int max_left=INT_MIN,max_right=INT_MIN;
        vector<int> maxl,maxr;
        for(int i=0;i<n;i++){
            if(arr[i]>max_left){
                max_left=arr[i];
            }
            if(arr[n-1-i]>max_right){
                max_right=arr[n-1-i];
            }
            maxl.push_back(max_left);
            maxr.push_back(max_right);
        }
        reverse(maxr.begin(), maxr.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(maxl[i],maxr[i])-arr[i];
        }
        return ans;

        
    }
};