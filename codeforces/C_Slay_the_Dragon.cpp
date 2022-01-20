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
const int N=1e3+2;
void solve()
{
    int n;
    cin>>n;
    vi v(n);
    int sum=0;
    rep(i,0,n){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        int coins=0;
        int idx=lower_bound(v.begin(),v.end(),x)-v.begin();
        if(idx==0){
            if(y>(sum-v[idx]))
                coins+=(y-(sum-v[idx]));
        }
        else if(idx!=n){
            int a=0,b=0;
            if(v[idx]<x){
                a+=x-v[idx];
            }
            if(y>(sum-v[idx])){
                a+=y-(sum-v[idx]);
            }
            if(v[idx-1]<x){
                b+=x-v[idx-1];
            }
            if(y>(sum-v[idx-1])){
                b+=y-(sum-v[idx-1]);
            }
            coins=min(a,b);
        }
        else{
            int b=0;
            if(v[idx-1]<x)
                 b+=x-v[idx-1];
            if(y>(sum-v[idx-1])){
                b+=(y-(sum-v[idx-1]));
            }
            coins=b;
        }
        cout<<coins<<endl;
    }
  
}
    
    
    

    

signed main()
{
    FastIO;
    int t;
    
        solve();
    return 0;
}