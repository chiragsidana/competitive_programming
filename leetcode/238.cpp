class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)count++;
        }
        if(count==0){
            int pro=1;
            vector<int> v;
            for(int i=0;i<n;i++){
                pro*=nums[i];
            }
            for(int i=0;i<n;i++){
                v.push_back(pro/nums[i]);
                
            }
            return v;
        }
        else if(count==1){
            int pro=1;
            vector<int> v;
            for(int i=0;i<n;i++){
                if(nums[i]!=0)pro*=nums[i];
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0)v.push_back(pro);
                else v.push_back(0);
                
            }
            return v;
        }
        else{
            vector<int> v;
            for(int i=0;i<n;i++){
                v.push_back(0);
            }
            return v;
            
        }
    }
};
