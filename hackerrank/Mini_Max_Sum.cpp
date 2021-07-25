#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll arr[5];
    ll n=5;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    ll cum=sum;
    ll a1=LONG_LONG_MIN;
    ll a2=LONG_LONG_MAX;
    for(ll i=0;i<n;i++){
        ll l=(sum-arr[i]);
        a1=max(a1,l);
         a2=min(a2,l);
         
    }
    cout<<a2<<" "<<a1;
    return 0;
}
