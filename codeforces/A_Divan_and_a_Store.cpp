#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,l,r,k;
cin>>n>>l>>r>>k;
vector<int> v;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
}
sort(v.begin(),v.end());
ll m=0;
int ans=0;
for(int i=0;i<n;i++){
if((m+v[i])<=k){
    if(v[i]>=l  && v[i]<=r){
        ans+=1;
        m+=v[i];
    }
}
}
cout<<ans<<endl;
return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}