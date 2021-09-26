#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll l,r;
    cin>>l>>r;
    ll count=0;
    count=((r/3)-(l/3));
    if((l%3)==0){
        count++;
    }
    cout<<count<<endl;
     
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}