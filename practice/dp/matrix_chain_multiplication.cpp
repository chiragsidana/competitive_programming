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
const int N=102;
int a[N];
int dp[N][N];
// int mcm(int i,int j){
//     if(i==j)
//     return 0;

//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     dp[i][j]=MOD;
//     rep(k,i,j){
//         dp[i][j]=min(dp[i][j],mcm(i,k)+mcm(k+1,j)+a[i-1]*a[k]*a[j]);
//     }
//     return dp[i][j];
// }
int main()
{
    // memset(dp,-1,sizeof dp);
    int n;cin>>n;
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,1,n){
        dp[i][i]=0;
    }
    rep(l,2,n){
        rep(i,1,n-l+1){
            int j=i+l-1;
            dp[i][j]=MOD;
            rep(k,i,j){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j]);
            }
        }
    }
    // cout<<mcm(1,n-1)<<endl;
    cout<<dp[1][n-1]<<endl;
    return 0;
}