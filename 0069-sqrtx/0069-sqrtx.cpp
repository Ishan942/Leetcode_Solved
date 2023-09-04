class Solution {
public:
    int bSearch(int start,int end,int x){
        int mid;
        while(end>=start){
            mid=start+(end-start)/2;
            cout<<mid;
            if(mid==x/mid){
                return mid;
            }
            else if(mid<x/mid){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
    }
    int mySqrt(int x) {
        if(x==0){
            return x;
        }
        return bSearch(1,x,x);
    }
};