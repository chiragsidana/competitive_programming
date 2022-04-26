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
void f(int l,int r,vi &a){
    if(l>=r) return;
    swap(a[l],a[r]);
    f(l+1,r-1,a);
   
    
}
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    f(l,r,a);
    rep(i,0,n){
        cout<<a[i]<<" ";
    }
    return 0;
}