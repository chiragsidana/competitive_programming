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
bool f(int i,vi &ans,int s,int sum,vi &a,int n){
    if(i==n){
        if(s==sum){
            for(auto it:ans)cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    ans.push_back(a[i]);
    s+=a[i];
    if(f(i+1,ans,s,sum,a,n)==true)return true;
    s-=a[i];
    ans.pop_back();
    if(f(i+1,ans,s,sum,a,n)==true)return true;
    return false;
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

   f(0,ans,0,sum,a,n);
    return 0;
}