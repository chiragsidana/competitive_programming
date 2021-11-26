#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,one;
    cin>>n>>one;
    ll zero=n-one;
    ll zerogroup=one+1;
    if(zero<=one){
        cout<<zero<<endl;
    }
    else{
        ll ans=0;
        ll rem=zero%zerogroup;
        ll minzeroes=zero/zerogroup;
        ans=(zerogroup*minzeroes*(minzeroes+1))/2;
        ans+=rem*(minzeroes+1);
        cout<<ans<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}