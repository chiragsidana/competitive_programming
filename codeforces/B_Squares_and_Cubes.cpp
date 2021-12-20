#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


void solve(){
    int n;
    cin>>n;
    int ans=1;
    int max=31623;
    for(int i=2;i<max;i++){
        if((i*i)<=n){
            ans++;
        }
        int temp=i*i*i;
        int temp2=sqrt(temp);

        if(temp<=n and temp!=(temp2*temp2)){
            ans++;
        }
    }
    cout<<ans<<endl;
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