#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll t;
    cin>>t;
    ll a[t];
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    int ans=0;
    for(ll i=0;i<t;i++){
        int mx=((a[i])*(t-i));

        ans=max(mx,ans);
    }
    cout<<ans<<endl;
}
int main(){
    solve();    
return 0;
}