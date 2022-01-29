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
int flipflip(int n){
    int nomen = 0,cntap = 0;
    while(n){
        if(n%2 == 0) nomen += (1LL<<cntap);
        n /= 2,cntap++;
        if(n <= 0) break;
    }
    return nomen;
}
void solve()
{
    
    // vi v(n);
    // for(int i=0;i<n;i++){
    //     v[i]=i+1;
    // }
    // for(int i=1;i<n;i++){
    //     swap(v[i],v[i-1]);
    //     i++;
    // }
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans+=(i+1) xor v[i];
    // }
    // cout<<ans<<endl;
    
 int n; cin>>n;
        int chirag = 0;
        while(n > 0)
        {
            int aaluu = flipflip(n);
            int bhalu = n;
            if((bhalu&(bhalu+1)) == 0) bhalu--;
            int val = ((bhalu * (bhalu+1)) / 2) - ((aaluu * (aaluu-1)) / 2);
            chirag += (val*2);
            n = aaluu-1;
        }
        cout<<chirag<<endl;
    

    
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
