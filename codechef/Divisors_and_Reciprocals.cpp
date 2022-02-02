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
    int x,a,b;cin>>x>>a>>b;
    if(x%a==0){
        int chirag=x/a;
        int sidana=b*chirag;
        int ans=0;
        for(int i=1;i<=sqrtl(sidana);i++){
            if(ans>x)
            break;
            if(sidana%i==0){
                ans+=i;
                if(sidana/i!=i){
                    ans+=sidana/i;
                }
            }
        }
        if(ans!=x){
            cout<<-1<<endl;
        }
        else cout<<sidana<<endl;
    }
    else cout<<-1<<endl;
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