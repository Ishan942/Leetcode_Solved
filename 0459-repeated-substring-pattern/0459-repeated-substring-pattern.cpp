class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
            for(int i=1;i<n;i++){
            string cmp=s.substr(0,i);
            int flag=0;
            int j=0;
            while(j<n){
                string curr_str=s.substr(j,i);
                j+=i;
                if(curr_str!=cmp){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return true;
            }
            }
            return false;
        
    }
};