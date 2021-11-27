#include<bits/stdc++.h>
using namespace std;
#define int long long
const int abc = 998244353;
void solve(){
     int n;
    cin>>n;
    if(n==1){
        cout<<"1\n";
        return;
    }
    int val = (n * (n+1))%abc;
    val = (val*(n+1))%abc;
    val = (val*748683265)%abc;
    // int val=(n*(n+1)*n+1*748683265)%mod;
    cout<<val<<endl;
    
   
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}