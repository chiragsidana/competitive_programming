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
    if(n==3){
        cout<<3<<" "<<2<<" "<<1<<endl;
        cout<<1<<" "<<3<<" "<<2<<endl;
        cout<<3<<" "<<1<<" "<<2<<endl;
        return;
    }
    list<int> ans;
    rep(i,0,n){
        ans.push_back(i+1);
    }
    ans.sort();
    ans.reverse();
    rep(i,0,n){
        for (auto it = ans.begin(); it != ans.end(); ++it)
        cout<< *it<<" ";
        
    cout<<endl;
    int temp=*ans.begin();
    ans.pop_front();
    ans.push_back(temp);
    }

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