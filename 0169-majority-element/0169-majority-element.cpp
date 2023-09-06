class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                elem=nums[i];
            }
            if(nums[i]==elem){
                count++;
            }
            else{
                count--;
            }
            
        }
        return elem;
    }
};