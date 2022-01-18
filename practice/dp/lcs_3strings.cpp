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
int dp[205][205][205];
const int N=1e3+2;
int lcs(string &s1,string &s2,string &s3,int i,int j,int k){
    if(i==0 or j==0 or k==0){
        return 0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    if(s1[i-1]==s2[j-1] and s2[j-1]==s3[k-1]){
        return dp[i][j][k]=1+lcs(s1,s2,s3,i-1,j-1,k-1);
    }else{
        int l=lcs(s1,s2,s3,i-1,j,k);
        int r=lcs(s1,s2,s3,i,j-1,k);
        int p=lcs(s1,s2,s3,i,j,k-1);
        return dp[i][j][k]=max({l,r,p});

    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<lcs(s1,s2,s3,s1.size(),s2.size(),s3.size());
    return 0;
}