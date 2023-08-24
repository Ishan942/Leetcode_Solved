class Solution {
public:
    string countAndSay(int n,string s="1") {
        if(n == 0)return string(0);
        if(n == 1)return s; 
        int i = 0,len = s.size();
        string ans;
        while(i<len){
            int j = i;
            while(i<len and s[i] == s[j])++i;
            ans+=to_string(i-j) + s[j];
        };
        return countAndSay(n-1,ans);
    }
};