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
void solve()
{
    int k;cin>>k;
    vi v;
    if(k<2){
        cout<<0<<endl;
        return ;
    }
    int chirag=0;
    int sidana=0;
    while((k-sidana)%2==0){
        chirag++;
        sidana+=(k-sidana)/2;
    }
    cout<<chirag<<endl;
    
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