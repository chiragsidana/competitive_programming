#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long p,a,b,c,x,y;
    cin>>p>>a>>b>>c>>x>>y;
    long long div;
    long long minmc=c+(a*y);
    long long minma=b+(a*x);


    // if(minm==b){
    //      div=x;
    // }
    // else{
    //     div=y;
    // }
    long long sum=min(minma,minmc);
    long long ans=p/sum;
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}