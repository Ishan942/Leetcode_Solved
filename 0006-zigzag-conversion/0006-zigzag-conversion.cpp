class Solution {
public:
    string convert(string s, int numRows) {
        unordered_map<int,string> mpp;
        int n=s.length();
        int i=0;
        string ans="";
        while(i<n){
            for(int j=0;j<numRows;j++){
                if(i<n){
                mpp[j]+=s[i];
                i++;}
                else{
                    break;
                }
            }
            for(int j=1;j<numRows-1;j++){
                if(i<n){
                mpp[numRows-j-1]+=s[i];
                i++;}
                else{
                    break;
                }
            }
        }
        // for(auto x:mpp){
        //     ans=ans+x;
        // }
        for(int j=0;j<numRows;j++){
            ans+=mpp[j];
        }
        return ans;

        
    }
};