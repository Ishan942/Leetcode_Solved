class Solution {
public:
    bool isPalindrome(string s) {
        int j=s.length()-1;
        int i=0;
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(i<=j){
            if (!isalnum(s[i])) {
                i++;
            } else if (!isalnum(s[j])) {
                j--;
            } else if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};