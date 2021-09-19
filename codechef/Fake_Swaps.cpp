#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
string s;
cin>>s;
string p;
cin>>p;
int count0=0;
int count1=0;
if(s==p){
    cout<<"YES"<<endl;
    return;
}
else{
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        if(s[i]=='1'){
            count1++;
        }
    }
    if((count0>=1) && (count1>=1)){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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