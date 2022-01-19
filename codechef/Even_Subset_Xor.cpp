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
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
bool bitCounter(int n){
    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }
    if(count%2==0){
        return true;
    }
    return false;
}
void solve()
{
    int n;cin>>n;
    for(int k=1;n>0;k++){
        if(__builtin_popcount(k)%2==0){
            cout<<k<<" ";
            n--;
        }
    }cout<<endl;
}
signed main()
{
    FastIO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}