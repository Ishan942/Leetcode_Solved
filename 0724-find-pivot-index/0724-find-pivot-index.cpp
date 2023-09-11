class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long long csum=0;
        long long lsum=sum;
        for(int i=0;i<n;i++){
            lsum-=nums[i];
            if(csum==lsum){
                return i;
            }
            //cout<<lsum<<" "<<csum<<"\n";
            
            csum+=nums[i];

        }
        return -1;
    }
};