#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a,b;
    cin>>a>>b;
    ll posteam=(a+b)/4;
    if(min(a,b)>=posteam){
        cout<<posteam<<endl;
        return;
    }
    else{
        cout<<min(a,min(b,posteam))<<endl;
        return;
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