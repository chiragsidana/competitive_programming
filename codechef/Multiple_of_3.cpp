#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    ll k;
    int d0,d1;
    cin>>k>>d0>>d1;
    int sum=d0+d1;
    k-=2;
    while(k--){
        sum+=(sum%10);
        if(k%12==0){
            break;
        }
    }
    if(sum%3==0){
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