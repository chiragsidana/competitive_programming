#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int acount=0,bcount=0,ccount=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            acount++;
        }
        if(s[i]=='B'){
            bcount++;
        }
        if(s[i]=='C'){
            ccount++;
        }
        
    }
    if((acount+ccount)==bcount){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}