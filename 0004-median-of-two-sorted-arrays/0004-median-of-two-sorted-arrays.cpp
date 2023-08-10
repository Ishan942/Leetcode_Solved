class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                sorted.push_back(nums2[j]);
                j++;
            }
            else{
                sorted.push_back(nums1[i]);
                i++;
            }

        }
        while(i<nums1.size()){
            sorted.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            sorted.push_back(nums2[j]);
            j++;
        }

        if(sorted.size()%2!=0){
            return sorted[(sorted.size()-1)/2];
        }
        else{
            return (sorted[(sorted.size()-1)/2 +1]+sorted[(sorted.size()-1)/2])/2.0;
        }
        
    }
};