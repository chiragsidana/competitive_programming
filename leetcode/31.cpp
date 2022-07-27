class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int minidx=-1;
        for(int i=n-2;i>=0;i--){
            
            if(nums[i]<nums[i+1]){
                minidx=i;
                break;
            }
        }
        if(minidx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int minidx2=-1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[minidx]){
                minidx2=i;
                break;
            }
        }
        if(minidx!=-1){
            swap(nums[minidx],nums[minidx2]);
            sort(nums.begin()+minidx+1,nums.end());
            return;
        }
        
    }
};
