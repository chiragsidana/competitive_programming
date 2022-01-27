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
    vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    int chirag=0;
    int last=v[n-1];
    int j=n-2;
    int jump=1;
    while(j>=0){
        while(j>=0 and v[j]==last){
            jump++;
            j--;
        }
        if(j<0) break;
        chirag++;
        j-=jump;
        jump*=2;
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