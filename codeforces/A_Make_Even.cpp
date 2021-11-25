#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int m=n;
    if(n%2==0){
        cout<<"0"<<endl;
        return;
    }
    while((m/10)!=0){
        m=m/10;
    }
    if(m%2==0){
            cout<<"1"<<endl;
            return;
        }
    while((n/10)!=0){
        n=n/10;
        if(n%2==0){
            cout<<"2"<<endl;
            return;
        }
    }
   
    cout<<'-'<<"1"<<endl;
    return;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}