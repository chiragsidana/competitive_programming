class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int ma=1,mi=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma=max(nums[i],nums[i]*ma);
            mi=min(nums[i],nums[i]*mi);
            ans=max(ma,ans);
        }
        return ans;
    }
};
