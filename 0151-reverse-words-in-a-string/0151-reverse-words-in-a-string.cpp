class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string curr_word="",ans="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                while(s[i]!=' ' && i<n){
                    curr_word+=s[i];
                    i++;
                }
                ans=curr_word+" "+ans;
                curr_word = "";
            }
        }
        return ans.substr(0, ans.length() - 1);
    }
};