class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> m1(n);
        int maxi=height[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            m1[i]=maxi;
        }
        maxi=height[n-1];
        vector<int> m2(n);
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            m2[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int x=min(m1[i],m2[i])-height[i];
            if(x<0)ans+=0;
            else ans+=x;
        }
        return ans;
        
        
    }
};
