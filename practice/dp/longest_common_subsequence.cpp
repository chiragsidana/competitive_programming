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

// int dp[N][N];
// int lcs(string &s1,string &s2,int n,int m){
// if(n==0 or m==0)
//     return 0;
// if(dp[n][m]!=-1){
//     return dp[n][m];
// }
// if(s1[n-1]==s2[m-1])
// dp[n][m]=1+lcs(s1,s2,n-1,m-1);
// else{
//     dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
// }
// return dp[n][m];

// }
int main()
{
    // rep(i,0,N){
    //     rep(j,0,N){
    //         dp[i][j]=-1;
    //     }
    // }
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size(),m=s2.size();
    // cout<<lcs(s1,s2,n,m)<<endl;

    vvi dp(n+1,vi(m+1,-1));
    rep(i,0,n+1){
        rep(j,0,m+1){
            if(j==0 or i==0){
                dp[i][j]=0;
                continue;
            }
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }    
        }
    }
    cout<<dp[n][m];
    
  
    return 0;
}