#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,m;
cin>>a>>b>>c>>m;

vector<int> v(3);
v[0]=a;
v[1]=b;
v[2]=c;
sort(v.begin(),v.end());

if(((v[2]-(v[1]+v[0]+1))<=m ) && (m<=(a+b+c-3))){
    cout<<"YES"<<endl;
    
}
else{
    cout<<"NO"<<endl;
  
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