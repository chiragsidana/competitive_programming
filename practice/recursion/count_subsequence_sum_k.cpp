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
int f(int i,int s,int sum,vi &a,int n){
    if(i==n){
        if(s==sum){
            return 1;
        }
        else return 0;
    }
   
    s+=a[i];
    int l=f(i+1,s,sum,a,n);
    s-=a[i];
   
    int r=f(i+1,s,sum,a,n);
    return l+r;
}
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    vi ans;
    int sum=2;

  cout<< f(0,0,sum,a,n);
    return 0;
}