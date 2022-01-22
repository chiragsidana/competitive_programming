#include <bits/stdc++.h>
#define int long long
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
int pow(int a,int n){
    // a%=MOD;
    // int ans=1;
    // while(n>0){
    //     if(n&1)
    //     ans=(ans*a)%MOD;
    //     a=(a*a)%MOD;
    //     n=n>>1;
    // }
    // return ans;
    if(n==0)
    return 1;
    int p=((pow(a,n/2))%MOD);
    if(n&1){
        return ((((p*p)%MOD)*a)%MOD);
    }
    else{
        return (p*p)%MOD;
    }
}
signed main()
{
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n)<<endl;
    return 0;
}