#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    string t;
    int scount=0;
    int tcount=0;
    cin>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            scount++;
        }
    }
      for(int i=0;i<n;i++){
        if(t[i]=='1'){
            tcount++;
        }
    }
    int ans=min(scount,tcount);
    int m=(n/2);
    ans=min(ans,m);
    cout<<ans<<endl;


}
int main(){
    int q;
    cin>>q;
    while(q--){
        solve();
    }
    return 0;
}