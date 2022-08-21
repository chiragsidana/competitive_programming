class Solution {
public:
    int minOperations(int n) {
        if(n%2==0){
            // first n/2odd no ka sum
            // int l=((n/2)*2)-1;
            // return (n*(1+l))/4;
            int ans=0;
            for(int i=1;i<=n;i+=2){
                ans+=i;
            }
            return ans;
        }
        else{
            // n/2 even no ka sum
            // int l=((n)/2)*2;
            // return ((n/2)*(2+l))/2;
            int ans=0;
            for(int i=2;i<=n;i+=2){
                ans+=i;
            }
            return ans;
        }
    }
};
