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
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char,int> chirag;
    rep(i,0,n){
        chirag[s[i]]++;
    }
    int p=0,sin=0;
    for(auto x:chirag){
        if(x.second%2!=0){
            sin++;
        }
        p+=(x.second/2);

    }
    int a=0;
    a+=(2*(p/k));
    if((2*(p%k)+sin)>=k){
        a++;
    }
    cout<<a<<endl;
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