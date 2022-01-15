
// #include <bits/stdc++.h>
// #define int long long
// #define endl "\n"
// #define PI 3.141592653589793238
// #define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
// using namespace std;
// bool check(vector<int> v,int n,int x){
//     int m=0,tmp[n];
//     bool bhalla=true;
//     for(int i=0;i<n;i++){
//         if(v[i]!=x){
//             tmp[m]=v[i];
//             m++;
//         }
//     }
//     for(int i=0;i<m;i++){
//         if(tmp[i]!=tmp[m-i-1]){
//             bhalla=false;
//         }
//     }
//     if(bhalla)return true;
//     else return false;
// }
// void solve()
// {
//     int n;cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     if(n==1 or n==2){
//         cout<<"YES"<<endl;
//         return;
//     }
//     bool a1=true,a2=true,a3=true;
//     for(int i=0;i<n;i++){
//         if(v[i]!=v[n-i-1]){
//             a1=false;
//             a2=check(v,n,v[i]);
//             a3=check(v,n,v[n-i-1]);
//             break;
//         }

//     }
// if(a1 or a2 or a3)cout<<"YES"<<endl;
// else cout<<"NO"<<endl;
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
int sidana(int n,int m,int i,int j){
    int chirag=0;
    chirag=max(chirag,abs(i-1)+abs(j-1));
    chirag=max(chirag,abs(i-1)+abs(j-m));
    chirag=max(chirag,abs(i-n)+abs(j-1));
    chirag=max(chirag,abs(i-n)+abs(j-m));
    return chirag;

}
void solve()
{
    int n,m;
    cin>>n>>m;
    vi chirag;
    rep(i,1,n+1){
        rep(j,1,m+1){
            chirag.push_back(sidana(n,m,i,j));
        }
    }
    sort(chirag.begin(),chirag.end());
    int kanu=chirag.size();
    rep(i,0,kanu){
        cout<<chirag[i]<<" ";
    }cout<<endl;
    
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