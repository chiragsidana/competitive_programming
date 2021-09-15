#include<bits/stdc++.h>
using namespace std;
void solve(){
long long n,s;
cin>>n>>s;
long long sum=((n*(n+1))/2);
long long ans=sum-s;
if(ans>0 && ans<=n){
    cout<<ans<<endl;
}
else{
    cout<<"-1"<<endl;
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