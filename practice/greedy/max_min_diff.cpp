#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long mn=0,mx=0;
    rep(i,0,n/2){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<mn<<" "<<mx;
    return 0;
}