#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    string s;
    cin>>s;

    int chirag[n]={0};
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            sum++;
            
        }
        chirag[i]=sum;
    }

   
    int sidana[k];
    int p=n-k+1;
    sidana[0]=chirag[p-1];
    for(int i=1;i<k;i++){
        sidana[i]=chirag[i+p-1]-chirag[i-1];
    }

    int ans=0;
    for(int i=0;i<k;i++){
        if(sidana[i]%2==1){
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