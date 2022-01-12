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
// #define vpi vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second
// using namespace std;
// void solve()
// {
//     int m,x;
//     cin>>m>>x;
//     if(m==2){
//         rep(i,0,x){
//             cout<<1<<" ";
//         }cout<<endl;
//         return;
//     }
//      else if(m%2!=0){
//         if(x<m){
//             rep(i,0,x){
//                 cout<<i+1<<" ";
//             }cout<<endl;

//         }
//         else{
//             rep(i,1,m){
//                 cout<<i<<" ";
//             }
//             rep(i,m,x+1){
//                 cout<<m-1<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else if(m%2==0 and m!=2){
//         if(x<=m-2){
//             rep(i,1,x+1){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             rep(i,1,m-1){
//                 cout<<1<<" ";
//             }
//             rep(i,m-1,x+1){
//                 cout<<2<<" ";
//             }
//         }cout<<endl;
//     }
// }
// signed main()
// {
//     FastIO;
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }
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
void solve()
{
    int m,x;
    cin>>m>>x;
    int n=m-1;
    vi v(x);
    v[0]=1;
    int chirag;
    rep(i,1,x){
        chirag=(n%(i+1))+1;
        if(v[i-1]<chirag){
            v[i]=v[i-1];
        }
        else{
            v[i]=v[i-1]+1;
        }
    }
    rep(i,0,x){
        cout<<v[i]<<" ";
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