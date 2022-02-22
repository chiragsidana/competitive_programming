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
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
void solve()
{
    string s;cin>>s;
    int r=0,b=0,g=0;
    int n=s.size();
    rep(i,0,n){
        if(s[i]=='r'){
            r=1;
        }
        if(s[i]=='g'){
            g=1;
        }
        if(s[i]=='b'){
            b=1;
        }
        if(s[i]=='R'){
            if(r!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]=='G'){
            if(g!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]=='B'){
            if(b!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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