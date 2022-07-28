class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n=price.size();
        vector<int> a(n);
        vector<int> b(n);
        int mini=price[0];
        int maxi=price[n-1];
        a[0]=mini;
        b[n-1]=maxi;
        for(int i=1;i<n;i++){
            a[i]=min(mini,price[i]);
            mini=a[i];
        }
        for(int i=n-2;i>=0;i--){
            b[i]=max(maxi,price[i]);
            maxi=b[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,b[i]-a[i]);
        }
        
        return ans;
        
    }
};
