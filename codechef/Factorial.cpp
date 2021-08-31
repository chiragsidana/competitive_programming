#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    for(int i=5;i<=n;i=i*5){
        count+=(n/i);
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