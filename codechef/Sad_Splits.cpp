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
    // vi a;
    // while(n!=0){
    //     a.push_back(n%10);
    //     n/=10;
    // }
    // int ans=0;
    // rep(i,0,a.size()){
    //     if(ans==2) break;
    //     if(a[i]%2==0){
    //         ans++;
    //     }
    // }
    // if(ans==2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    string s=to_string(n);
    rep(i,1,s.length()){
        string s1=s.substr(0,i);
        string s2=s.substr(i,s.length()-i);
        // int sum1=0,sum2=0;
        // rep(i,0,s1.size()){
        //     sum1+=s[i];
        // }
        // rep(i,0,s2.size()){
        //     sum2+=s[i];
        // }
        // if((sum1+sum2)%2==0){
        //     cout<<"YES"<<endl;
        //     return;
        // }
        if((stoll(s1)+stoll(s2))%2==0){
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
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