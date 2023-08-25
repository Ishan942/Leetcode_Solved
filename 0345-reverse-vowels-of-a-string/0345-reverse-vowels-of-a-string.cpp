class Solution {
public:
    bool vowel(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' ||a=='O' ||a=='U' ){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0;int j=s.length()-1;
        char temp;
        while(j>i){
            while(j>i && !vowel(s[j])){
                j--;
            }
            while(j>i && !vowel(s[i])){
                i++;
            }
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;j--;
        }
        return s;
    }
};