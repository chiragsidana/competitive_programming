class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)==false)
                return {-1,-1};
        int idx1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int idx2=upper_bound(nums.begin(),nums.end(),target)-1-nums.begin();
        return {idx1,idx2};
        // if(nums[idx1]==target and nums[idx2]==target){
        //     ans.push_back(idx1);
        //     ans.push_back(idx2);
        // }
        // else{
        //     ans.push_back(-1);
        //     ans.push_back(-1);
        // }
//         if(nums[idx1]==*nums.end() or nums[idx1]!=target or nums[idx2]!=target)return{-1,-1};
//         else return{idx1,idx2};
    }
};
