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
    int n;
    cin>>n;
    vi v(n);
    vpi steps;
    rep(i,0,n){
        cin>>v[i];
    }
    rep(i,0,n){
        int min_pos=i;
        rep(j,i+1,n){
            if(v[j]<v[min_pos])
            min_pos=j;
        }

        if(min_pos>i){
            steps.push_back({i,min_pos});
            int opt=v[min_pos];
            for(int j=min_pos;j>i;j--)
                v[j]=v[j-1];
            v[i]=opt;
        }
    }
    cout<<steps.size()<<endl;
    for(auto &it:steps){
        cout<<it.first+1<<" "<<it.second+1<<" "<<it.second-it.first<<endl;
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