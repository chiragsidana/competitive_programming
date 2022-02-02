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
    string s;cin>>s;
    if(n%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
         if (mp.find(s[i]) == mp.end())
        {
            mp.insert(make_pair(s[i], 1));
        }
 
       
        else
        {
            mp[s[i]]++;
        }
    }
    for (auto& it : mp) {
        if(it.ss>n/2){
            cout<<"NO"<<endl;
            return;
        }
    }
    sort(s.begin(),s.end());
    reverse(s.begin()+(n/2),s.end());
    bool flag=true;
    rep(i,0,n){
        if(s[i]==s[n-1-i]){
            flag=false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else cout<<"NO"<<endl;


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