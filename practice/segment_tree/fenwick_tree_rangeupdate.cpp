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
int update(int i,int inc,int bit[],int n){
    while(i<=n){
        bit[i]+=inc;
        i+=i&(-i);
    }
}
int query(int i,int bit[],int n){
    int ans=0;
    while(i>0){
        ans+=bit[i];
        i-=i&(-i);
    }
    return ans;
}
void solve()
{
    int n;cin>>n;
    int bit[n+10]={0};
    int u;cin>>u;
    while(u--){
        int l,r,inc;
        cin>>l>>r>>inc;
        l++;r++;
        update(l,inc,bit,n);
        update(r+1,-inc,bit,n);
    }
    int q;cin>>q;
    while(q--){
        int w;cin>>w;
        w++;
        cout<<query(w,bit,n)<<endl;
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