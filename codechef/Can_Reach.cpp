#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    if(abs(x)%k==0  && abs(y)%k==0){
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