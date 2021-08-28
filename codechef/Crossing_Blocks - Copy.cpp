#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    int m=-1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        m=max(v[i],m);

    }
    int mx=v[n-1];
    int count=0;
    for(int i=n-2;i>0;i--){
        if(mx<v[i]){
            mx=v[i];
            count++;
        }
    }
    if(mx>v[0]){
        cout<<-1<<endl;
        return ;
    }
    cout<<count+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}