#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    int b=0;
    int w=0;
    char m=s[0];
    if(m=='B'){
        b++;
    }
    else{
        w++;
    }
    for(int i=1;i<n;i++){
        if(m!=s[i]){
            if(s[i]=='B'){
                b++;
            }
            else{
                w++;
            }
        }
        m=s[i];
    }
    cout<<min(b,w)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}