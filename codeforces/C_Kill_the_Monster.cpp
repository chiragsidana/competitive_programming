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
    int hc,dc;cin>>hc>>dc;
    int hm,dm;cin>>hm>>dm;
    int k,w,a;cin>>k>>w>>a;
     bool chirag = false;

        for(int i = 0; i <= k; i++){
            int c = i;
            int t1 = dc + (w*c), t2 = hc + (a * (k-c));
            int v1 = hm/t1, v2 = t2/dm;
            if(hm%t1){
                v1++;
            }
            if(t2%dm){
                v2++;
            }
            if(v1 <= v2){
                chirag = true;
                break;
            }
        }

        if(chirag){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
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