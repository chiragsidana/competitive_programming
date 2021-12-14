#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;cin>>n;
    string ans="";
    char x='_';
    for(int i=0;i<n-2;i++){
        string s;
        cin>>s;
        
        if(x!=s[0]){
            ans+=s;
            x=s[1];
        }
        else{
            ans+=s[1];
            x=s[1];
        }
    }
   
    if (ans.size() != n)
     ans.push_back('a');
    cout << ans << endl;

    
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