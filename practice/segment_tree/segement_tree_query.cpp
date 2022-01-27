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
int a[N],tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=tree[2*node]+tree[2*node+1]; 
}
int query(int node,int st,int en,int l,int r){
    if(st>r or en<l){
        return 0;
    }
    if(l<=st and en<= r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
int main()
{
int n;
cin>>n;
rep(i,0,n){
    cin>>a[i];
}
build(1,0,n-1);
// rep(i,1,15){
//     cout<<tree[i]<<endl;
// }
while(1){
    int type;
    cin>>type;
    if(type==-1){
        break;
    }
    if(type==1){
        int l,r;
        cin>>l>>r;
        int ans=query(1,0,n-1,l,r);
        cout<<ans<<endl;
    }
}
    return 0;
}