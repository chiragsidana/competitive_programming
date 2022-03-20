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
    int n;cin>>n;
    vi a(n);
    int oddcount=0,evencount=0;
    vi e,o;
    rep(i,0,n) {
        cin>>a[i];
        if(a[i]%2==0){
            evencount++;
            e.push_back(a[i]);
        }
        else{
            oddcount++;
            o.push_back(a[i]);
        }
    }
    if(n%2!=0 and oddcount==n){
        cout<<-1<<endl;
        return;
    }
    if(oddcount<2 or (oddcount%2!=0 and evencount==0)){
        cout<<-1<<endl;
        return;
    }
    // if(oddcount%2==0){
    //     cout<<-1<<endl;
    //     return;
    // }
    if(oddcount%2==0){
        rep(i,0,e.size()){
        cout<<e[i]<<" ";
    }
    rep(i,0,o.size()){
        cout<<o[i]<<" ";
    }
    }
    else{
        cout<<o[0]<<" ";
        rep(i,0,e.size()){
            cout<<e[i]<<" ";
        }
        rep(i,1,o.size()){
            cout<<o[i]<<" ";
        }
    }
    
   
    cout<<endl;
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