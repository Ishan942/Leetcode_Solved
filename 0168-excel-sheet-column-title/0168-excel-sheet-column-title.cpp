class Solution {
public:
    string convertToTitle(int col) {
        string ans="";
        int rem;
        int flag=1;
        while(col && flag){
            rem=col%26;
            if(rem==0){
                col-=1;
            rem+=26;}

            ans=char(64+rem)+ans;
            if(col==26){
                flag=0;
            }
            col=col/26;
            
        }
        return ans;
    }
};