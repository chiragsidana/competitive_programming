#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==1){
        cout<<"YES\n";
        return;
    }

    for(;1==1;){
        ll fac = gcd(a,b);
        if(a==1){
            cout<<"YES\n";
            return;
        }
        if(fac==1){
            cout<<"NO\n";
            return;
        }
        a=a/fac;
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