class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int> pq;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            pq.push(nums1[i]);
        }
        for(int i=0;i<n;i++){
            pq.push(nums2[i]);
        }
        vector<int> v;
        int x=pq.size();
        for(int i=0;i<x;i++){
            v.push_back(pq.top());
            pq.pop();
        }
        double ans=0;
        // cout<<v.size()<<endl;
        if(v.size()%2!=0){
             ans=v[x/2];
        }
        else{
            ans=(v[x/2]+v[(x/2)-1])/2;
            if((v[x/2]+v[(x/2)-1])%2!=0){
                ans+=0.5;
            }
            
        }
        return ans;
    }
};