#include<bits/stdc++.h>
using namespace std;
void solve(){
    int g;
    cin>>g;
    while(g--){
        int i,n,q;
        cin>>i>>n>>q;
        //1:head
        //2:tails
        if(abs(i-q)==0)
        {
            cout<<n/2<<'\n';
        }
        else
        {
            cout<<(n+1)/2<<'\n';
        }
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