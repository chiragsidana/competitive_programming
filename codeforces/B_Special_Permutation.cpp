#include<bits./stdc++.h>
#define int long long 
using namespace std;
void solve(){
     int n,a,b;
    cin>>n>>a>>b;
    if(n==2){
        cout<<a<<" "<<b<<endl;
        return;
    }
    if((a>((n/2)+1)) or (b<(n/2))){
        cout<<-1<<endl;
        return;
    }
    if(a<=n/2 and b>=n/2+1 or b==n/2 and a==n/2+1){
        cout<<a<<" ";
        for(int i=n;i>0;i--){
            if(i!=a and i!=b){
                cout<<i<<" ";
            }
        }cout<<b<<" "<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
signed main(){
    int t;
    cin>>t;
   while(t--){
       solve();
   }

    return 0;
}