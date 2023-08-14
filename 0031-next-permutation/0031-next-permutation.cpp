class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index;
        int flag=0;
        int n=arr.size()-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]<arr[i+1]){
                flag=1;
                index=i;
                break;
            }
        }
        if(flag==0){
           reverse(arr.begin(),arr.end());
        } 
        else{
            for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
           
        }
    
        
    }
};