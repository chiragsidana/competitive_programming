#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count=0;
    if(s[0]=='1'){
        count=0;
    }
    if(s[0]=='0'){
        count=1;
    }
   
    for(int i=0;i<(s.length())-1;i++){
        if(s[i]!=s[i+1]){
            count++; 
        }
        
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}