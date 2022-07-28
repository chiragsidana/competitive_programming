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
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    vector<int> ans;
    for(auto it:m){
        ans.push_back(it.second);
    }
    if(ans.size()==1) cout<<(ans[0]+1)/2<<endl;
    else{
        sort(all(ans));
        reverse(all(ans));
        cout<<max((ans[0]+1)/2,ans[1])<<endl;
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