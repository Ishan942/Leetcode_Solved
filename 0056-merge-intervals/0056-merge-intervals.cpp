class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int start=arr[i][0];
            int end=arr[i][1];
            //if the current pair is already in the array
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                //chcek if next pairs start is in the interval if so then modify the end according to max as the array is already sorted the start is alredy in ascending order
                if(arr[j][0]<=end){
                    end=max(end,arr[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});

        }
        return ans;
    }
};