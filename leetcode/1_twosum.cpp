class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> labhya;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int bachya=target-nums[i];
            if(labhya.find(bachya)!=labhya.end()){
                ans.push_back(labhya[bachya]);
                ans.push_back(i);
                break;
            }
            else{
                labhya.insert(make_pair(nums[i],i));
            }
        }
        return ans;
    }
};