#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int max=n/2;
    for(int i=1;i<n;i++){
        cout<<v[i]<<" "<<v[0]<<endl;
        max--;
        if(max==0)break;
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
    return 0;
}
