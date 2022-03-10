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
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
void solve()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int ans1=0;
    for(int i=0;i<n;i+=2){
        ans1+=abs(a[i]);
    }
    int ans2=0;
    for(int i=1;i<n;i+=2){
        ans2+=abs(a[i]);
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int idxmin,idxmax;
    for(int i=0;i<n;i+=2){
        mini=min(mini,abs(a[i]));
       if(mini==abs(a[i])) idxmin=i;
    }
    for(int i=1;i<n;i+=2){
        maxi=max(maxi,abs(a[i]));
        if(maxi==abs(a[i])) idxmax=i;
    }
    swap(a[idxmin],a[idxmax]);
    int ans3=0;
    for(int i=0;i<n;i+=2){
        ans3+=abs(a[i]);
    }
    int ans4=0;
    for(int i=1;i<n;i+=2){
        ans4+=abs(a[i]);
    }
    cout<<max((ans1-ans2),(ans3-ans4))<<endl;
    
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