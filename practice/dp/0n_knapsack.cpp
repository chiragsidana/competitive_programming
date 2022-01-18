#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
const int N=1e3+2;
int main()
{
    int n=5,w=11;
    vi wt={3,2,4,5,1};
    vi val={4,3,5,6,1};
    vi dp(w+1,0);
    rep(j,0,w+1){

        rep(i,0,n){
            if(j-wt[i]>=0)
            dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
        }
    }
    cout<<dp[w];
    return 0;
}