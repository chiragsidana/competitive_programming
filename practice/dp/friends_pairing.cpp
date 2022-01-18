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
    int n;cin>>n;
    vi dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    rep(i,2,n+1){
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    cout<<dp[n];
    return 0;
}