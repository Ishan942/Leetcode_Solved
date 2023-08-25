class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        unordered_map<char,char>mpp;
        unordered_map<char,char>mppt;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end()){
                if(t[i]!=mpp[s[i]]){
                    return false;
                }
            }
            else{
                if(mppt.find(t[i])!=mpp.end()){
                    if(mppt[t[i]]!=s[i]){
                        return false;
                    }
                }
                mppt[t[i]]=s[i];
                mpp[s[i]]=t[i];
            }
        }
        return true;
    }
};