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
int val[N],wt[N];
int dp[N][N];
int Knapsack(int n,int w){
    if(w<=0)
        return 0;
    if(n<=0)
        return 0;
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(wt[n-1]>w)
        dp[n][w]=Knapsack(n-1,w);
    else dp[n][w]= max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n-1])+val[n-1]);
    return dp[n][w];
}
int main()
{
    rep(i,0,N){
        rep(j,0,N)
        dp[i][j]=-1;
    }
    int n;cin>>n;
    rep(i,0,n){
        cin>>wt[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    int w;cin>>w;

    cout<<Knapsack(n,w)<<endl;
    return 0;
}