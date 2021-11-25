#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    if(v[0]!=n && v[n-1]!=n){
        cout<< -1 <<endl;
        return;
    }
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
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