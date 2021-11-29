#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int droptime=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            droptime++;
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(v[n-1]==0){
        cout<<droptime<<endl;
        return;
    }
    droptime=0;
    for(int i=0;i<n;i++){
        if(v[i]-v[n-1]>0){
            droptime++;
        }
    }
    cout<<droptime+(v[n-1]*n)<<endl;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
