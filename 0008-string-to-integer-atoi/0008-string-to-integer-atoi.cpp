class Solution {
public:
bool addOverflow(int x, int y,int flag) {
    if (!flag) {
        if (x >= (INT_MAX - y)/10)
            return true;
    } 
    else{
        if (x >= (INT_MAX - y)/10 +1)
            return true;
    }
    return false;
}
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        int ans=0;
        int flag=1;
            while(i<n){
                if(s[i]==' '){
                    i++;
                }
                else if(s[i]=='-'){
                    flag=-1;
                    i++;
                    break;
                }
                else if(s[i]=='+'){
                    i++;
                    break;
                }
                else{
                    break;
                }
            }
            while(i<n){
                if (s[i] >= '0' && s[i] <= '9') {
                if (addOverflow(ans , s[i] - '0',flag)) {
                    return (flag == 1) ? INT_MAX : INT_MIN;
                } else {
                    ans = (ans * 10) + (s[i] - '0');
                }
                i++;
            } else {
                break;
            }
            }

        return flag*ans;
    }
};