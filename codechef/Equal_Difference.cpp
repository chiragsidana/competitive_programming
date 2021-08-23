#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int maximum = 0;
    unordered_map <long long, int> mp;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        mp[temp]++;
    }
    for(auto i:mp){
        maximum = max(maximum,i.second);
    }
    if(n<=2){
        cout<<"0\n";
        return;
    }
    cout<<min(n-2,n-maximum)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
