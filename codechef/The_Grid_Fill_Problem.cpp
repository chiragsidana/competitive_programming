#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n%2==0){
            cout<<"-1"<<" ";
            }
            else{
                if(i==j){
                    cout<<"-1"<<" ";
                }
                else{
                    cout<<"1"<<" ";
                }
            }
        }cout<<endl;
        
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