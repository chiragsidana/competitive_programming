// #include <bits/stdc++.h>
// #define int long long
// #define endl "\n"
// #define PI 3.141592653589793238
// #define MOD 1000000007
// #define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// #define vi vector<int>
// #define vb vector<bool>
// #define vc vector<char>
// #define pii pair<int,int>
// #define vvi vector<vector<int>>
// #define vpi vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// using namespace std;
// const int N=1e5+2;
// pii tree[4*N];
// int a[N];
// void build(int node,int st,int en){
//     if(st==en){
//         tree[node].ff=a[st];
//         tree[node].ss=1;
//         return;
//     }
//     int mid=(st+en)/2;
//     build(2*node,st,mid);
//     build(2*node+1,mid+1,en);
//     if(tree[2*node].ff<tree[2*node+1].ff){
//         tree[node].ff=tree[2*node].ff;
//         tree[node].ss=tree[2*node].ss;
//     }
//     else if(tree[2*node+1].ff<tree[2*node].ff){
//         tree[node].ff=tree[2*node+1].ff;
//         tree[node].ss=tree[2*node+1].ss;
//     }
//     else{
//          tree[node].ff=tree[2*node].ff;
//          tree[node].ss=tree[2*node].ss+tree[2*node+1].ss;
//     }
    

// }
// pii query(int node,int st,int en,int l,int r){
//     if(st>r or en<l){
//         return {MOD,-1};
//     }
//     if(l<=st and en<=r){
//         return tree[node];
//     }
//     int mid=(st+en)/2;
//     pii q1=query(2*node,st,mid,l,r);
//     pii q2=query(2*node+1,mid+1,en,l,r);
//     pii q;
//     if(q1.ff<q2.ff){
//         q=q1;
//     }
//     else if(q2.ff<q1.ff){
//         q=q2;
//     }
//     else{
//         q.ff=q1.ff;
//         q.ss=q1.ss+q2.ss;
//     }
//     return q;
// }
// void update(int node,int st,int en,int idx,int val){
//     if(st==en){
//         a[st]=val;
//         tree[node].ff=val;
//         tree[node].ss=1;
//         return;
//     }
//     int mid=(st+en)/2;
//     if(idx<=mid){
//         update(2*node,st,mid,idx,val);
//     }else{
//         update(2*node+1,mid+1,en,idx,val);
//     }
//      if(tree[2*node].ff<tree[2*node+1].ff){
//         tree[node].ff=tree[2*node].ff;
//         tree[node].ss=tree[2*node].ss;
//     }
//     else if(tree[2*node+1].ff<tree[2*node].ff){
//         tree[node].ff=tree[2*node+1].ff;
//         tree[node].ss=tree[2*node+1].ss;
//     }
//     else{
//          tree[node].ff=tree[2*node].ff;
//          tree[node].ss=tree[2*node].ss+tree[2*node+1].ss;
//     }
    
// }
// signed main()
// {
//     int n,m;cin>>n>>m;
// rep(i,0,n){
//     cin>>a[i];
// }
// build(1,0,n-1);
// while(m--){
//     int type;
//     cin>>type;
//     if(type==1){
//         int idx,val;
//         cin>>idx,val;
//         update(1,0,n-1,idx,val);
//     }else if(type==2){
//         int l,r;cin>>l>>r;
//         pii ans=query(1,0,n-1,l,r-1);
//         cout<<ans.ff<<" "<<ans.ss<<endl;
//     }
// }
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std ;
#define int long long
const int N = 1e5 + 2 , MOD = 1e9 + 7 ;
pair< int , int > tree [ 4 *N];
int a [N];
void build ( int node , int st , int en )
{
if (st == en){
tree [node]. first = a [st];
tree [node]. second = 1 ;
return ;
}
int mid = (st + en)/ 2 ;
build ( 2 *node, st, mid);
build ( 2 *node+ 1 , mid+ 1 , en);
if ( tree [ 2 *node]. first < tree [ 2 *node+ 1 ]. first ){
tree [node]. first = tree [ 2 *node]. first ;
tree [node]. second = tree [ 2 *node]. second ;
}
else if ( tree [ 2 *node+ 1 ]. first < tree [ 2 *node]. first ){
tree [node]. first = tree [ 2 *node+ 1 ]. first ;
tree [node]. second = tree [ 2 *node+ 1 ]. second ;
}
else {
tree [node]. first = tree [ 2 *node]. first ;
tree [node]. second = tree [ 2 *node]. second + tree [ 2 *node+ 1 ]. second ;
}
}
pair < int , int > query ( int node , int st , int en , int l , int r ){
if (st>r || en<l)
{
pair< int , int > p;
p . first = MOD;
p . second = - 1 ;
return p;
}
if (l<=st && en<=r)
return tree [node];
int mid = (st + en)/ 2 ;
pair< int , int > q1 = query ( 2 *node, st, mid, l, r);
pair< int , int > q2 = query ( 2 *node+ 1 , mid+ 1 , en, l, r);
pair< int , int > q;
if ( q1 . first < q2 . first ){
q = q1;
}
else if ( q2 . first < q1 . first ){
q = q2;
}
else {
q . first = q1 . first ;
q . second = q1 . second + q2 . second ;
}
return q;
}
void update ( int node , int st , int en , int idx , int val ){
if (st == en){
a [st] = val;
tree [node]. first = val;
tree [node]. second = 1 ;
return ;
}
int mid = (st+en)/ 2 ;
if (idx <= mid){
update ( 2 *node, st, mid, idx, val);
}
else
{
update ( 2 *node+ 1 , mid+ 1 , en, idx, val);
}
if ( tree [ 2 *node]. first < tree [ 2 *node+ 1 ]. first ){
tree [node]. first = tree [ 2 *node]. first ;
tree [node]. second = tree [ 2 *node]. second ;
}
else if ( tree [ 2 *node+ 1 ]. first < tree [ 2 *node]. first ){
tree [node]. first = tree [ 2 *node+ 1 ]. first ;
tree [node]. second = tree [ 2 *node+ 1 ]. second ;
}
else {
tree [node]. first = tree [ 2 *node]. first ;
tree [node]. second = tree [ 2 *node]. second + tree [ 2 *node+ 1 ]. second ;
}
}
signed main ()
{
int n,m;
cin >> n >> m;
for ( int i= 0 ; i<n; i++){
cin >> a [i];
}
build ( 1 , 0 ,n- 1 );
while (m--){
int type;
cin >> type;
if (type == 1 ){
// update
int idx,val;
cin >> idx >> val;
update ( 1 , 0 ,n- 1 ,idx,val);
}
else if (type == 2 ){
// query
int l,r;
cin >> l >> r;
pair< int , int > ans = query ( 1 , 0 ,n- 1 ,l,r- 1 );
cout << ans . first << " " << ans . second << endl;
}
}
return 0 ;
}