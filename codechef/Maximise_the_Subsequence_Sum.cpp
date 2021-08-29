#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int sum=0;
  
        for(int i=0;i<n&&i<k;i++){
            if(v[i]<0 ){
                v[i]=-v[i];
            }
        }
    
    for(int i=0;i<n;i++){
        if(sum+v[i]>sum){
            sum+=v[i];
        }
        
    }
    
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}