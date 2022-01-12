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
    int n;
    cin>>n;
    unordered_map<int,vi> chirag;
    rep(i,0,n){
        int t;
        cin>>t;
        chirag[t].push_back(i);

    }
    int sidana=-1;
    for(auto i:chirag){
        if(i.ss.size()>1){
            int size=i.ss.size();
            rep(j,0,size-1){
                int babla=min(i.ss[j],i.ss[j+1]) + min(n-i.ss[j],n-i.ss[j+1]);
                sidana=max(sidana,babla);
            }
        }
    }
    cout<<sidana<<endl;
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