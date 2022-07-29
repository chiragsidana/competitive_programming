class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        int ans=min(nums[lo],nums[hi]);
        if(nums[lo]<=nums[hi]){
            ans=nums[0];
        }
        else{
        while(lo<hi){
            cout<<nums[lo]<<' ';
            int mid=(lo)+(hi-lo)/2;
            if(nums[mid]>nums[mid+1]){ans=nums[mid+1];
                                      return ans;}
            else if(nums[mid]<nums[mid-1]){ans=nums[mid];
                                          return ans;}
            if(nums[lo]<=nums[mid]){
                lo=mid+1;
            }
            else if(nums[mid]<=nums[hi]){
                hi=mid-1;
            }
        }
        }
        return ans;
    }
};
