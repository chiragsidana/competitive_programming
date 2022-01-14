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
const int N=1e5+2;
// int dp[N];
// int MinSquare(int n){
//     if(n==1 or n==2 or n==3 or n==0){
//         return n;

//     }
//     if(dp[n]!=MOD){
//         return dp[n];
//     }


//     for(int i=1;i*i<=n;i++){
//         dp[n]=min(dp[n],1+MinSquare(n-i*i));
//     }
//     return dp[n];
// }
int main()
{
    // rep(i,0,N){
    //     dp[i]=MOD;
    // }
int n;cin>>n;

vi dp(n+1,MOD);
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=3;

for(int i=1;i*i<=n;i++){
    for(int j=0;i*i+j<=n;j++){
        dp[i*i +j]=min(dp[i*i+j],1+dp[j]);
    }
}
cout<<dp[n]<<endl;
// cout<<MinSquare(n)<<endl;
    return 0;
}
