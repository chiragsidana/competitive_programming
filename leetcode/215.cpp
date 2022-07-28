class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(-1*nums[i]);
            if(pq.size()>k)pq.pop();
        }
        int ans;
        // while(k--){
        //     ans=pq.top();
        //     pq.pop();
        // }
        return pq.top()*-1;
    }
};
