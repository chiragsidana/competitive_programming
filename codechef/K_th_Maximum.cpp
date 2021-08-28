#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
vector<int> v;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
}
int mx=*max_element(v.begin(),v.end());
long long count=0;
for(int i=0;i<n;i++){
    if(v[i]==mx && (i+1>=k)){
        count+=(n-i);
    } 
}
cout<<count<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){

    
    solve();
    }
    return 0;
}