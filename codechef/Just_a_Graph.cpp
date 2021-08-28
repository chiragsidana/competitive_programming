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
    int conn=0;
    for(int i=1;i<n;i++){
        if( v[i]-v[0] != i){
            conn++;
        }
    }
    cout<<(n-conn)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}