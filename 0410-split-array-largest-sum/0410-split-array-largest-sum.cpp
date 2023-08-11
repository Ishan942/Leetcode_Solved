class Solution {
public:

    int kcount(vector<int>& nums,int tar){
        int k=1;
        int curr=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+sum<=tar){
                sum+=nums[i];
            }
            else{
                k++;
                sum=nums[i];
            }
        }
        return k;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=kcount(nums,mid);
            if(cnt>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;


    }
};