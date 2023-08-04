class Solution {
public:
    bool f(int index,string s ,vector<string>& wordDict, unordered_map<string,bool>&dp){
        if(s.length()==0){
            //if the size of string is zero i.e. string has ended return true
            return true;
        }
        //special memoizaton with the help of map <string bool>
        if(dp.find(s)!=dp.end()){
            return dp[s];
        }
        for(int i=0;i<s.length();i++){
            //if the substring upto current index belongs to the dictonary, then check for the next section int the string after discarding the taken section by calling the function after it.
            if(find(wordDict.begin(),wordDict.end(),s.substr(0,i+1))!=wordDict.end()){
                if(f(i,s.substr(i+1),wordDict,dp)){
                    return dp[s]=true;
                }
            }
        }
        return dp[s]=false;

    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool>dp;
        return f(0,s,wordDict,dp);
    }
};