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
vi bit;
int getsum(int idx){
    int sum=0;
    while(idx>0){
        sum+=bit[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
void update(int n,int idx,int inc){
    while(idx<=n){
        bit[idx]+=inc;
        idx+=idx&(-idx);
    }
    
}
int main()
{
    int n;cin>>n;
    vi a(n);
    for(auto &i :a)
    cin>>i;
    vi temp=a;
    sort(all(temp));
    rep(i,0,n){
        a[i]=lower_bound(all(temp),a[i])-temp.begin()+1;
    }
    bit=vi(n+1);
    int inv=0;
    for(int i=n-1;i>=0;i--){
        inv+=getsum(a[i]-1);
        update(n,a[i],1);
    }
    cout<<inv;
    return 0;
}