#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        s+='(';
    }
    for(int i=0;i<n;i++){
        s+=')';
    }
    cout<<s<<endl;
    for(int i=0;i<n-1;i++){
        swap(s[n-1-i],s[n+i]);
        cout<<s<<endl;
        swap(s[n-1-i],s[n+i]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}