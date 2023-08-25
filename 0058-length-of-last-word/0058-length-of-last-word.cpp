class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int last_word=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                while(i>=0 && s[i]!=' '){
                    last_word++;
                    i--;
                }
                return last_word;
            }
        }
        return last_word;
    }
};