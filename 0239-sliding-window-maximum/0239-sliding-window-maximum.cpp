class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;

        //dequeue
        list<int>q;
        int i=0;
        int j=0;
        while(j<nums.size()){

            //if the curr element is greater pop back till  another greater element is encountered
            while(q.size()>0&&q.back()<nums[j]){
                cout<<q.back()<<" ";
                q.pop_back();
            }
            //push back the current element
            q.push_back(nums[j]);
            //the max is stored at the front of queue 
            //if the window size is k
              if(j-i+1==k){
                v.push_back(q.front());
                //if the start index of window is the start of the queue then move forward as the window size will not remain sam
                if(q.front()==nums[i]){
                    q.pop_front();
                }
                //increemtn the start index of the window
                i++;
            }
            //incremetn the end index
            j++;
        }
        return v;
    }
};