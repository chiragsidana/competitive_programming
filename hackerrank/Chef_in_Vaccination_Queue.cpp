#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,p,x,y;
    cin>>n>>p>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
    for(int i=0;i<p;i++){
        if(arr[i]==0){
            count+=x;
        }
        else{
            count+=y;
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
    return 0;
}