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
vi a;
int dp[100][100];
int solve(int i,int j){
    if(i==j)
    return a[i];
    if(i>j)
    return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int l=a[i]+min(solve(i+2,j),solve(i+1,j-1));
    int r=a[j]+min(solve(i,j-2),solve(i+1,j-1));
    return dp[i][j]=max(l,r);

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;cin>>n;
    a=vi(n);
    for(auto &i:a){
        cin>>i;
    }
    cout<<solve(0,n-1);
    return 0;
}