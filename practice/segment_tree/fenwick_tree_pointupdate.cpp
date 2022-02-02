#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
int n;
vi bit;
int update(int idx,int val){
    while(idx<=n){
        bit[idx]+=val;
        idx+=idx&(-idx);
    }
}
int query(int idx){
    int ans=0;
    while(idx>0){
        ans+=bit[idx];
        idx-=idx&(-idx);
    }
    return ans;
}
int main()
{
    cin>>n;
    bit=vi(n+1);
    vi a(n+1);
    rep(i,1,n+1){
        cin>>a[i];
        update(i,a[i]);
    }
    int q;cin>>q;
    while(q--){
        int c;cin>>c;
        if(c==1){
            int l,r;cin>>l>>r;
            int ans=query(r)-query(l-1);
            cout<<ans<<endl;
        }else if(c==2){
            int index,val;
            cin>>index>>val;
            update(index,-a[index]);
            a[index]=val;
            update(index,val);
        }
    }
    return 0;
}