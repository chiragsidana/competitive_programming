#include<bits/stdc++.h>
#define int long long
using namespace std;
int x[17] = { 1,1,2,1,4,1,2,1,8,1,2,1,4,1,2,1,16 };
void solve(){
    int n;
    cin>>n;


    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int val=1;
    for(int i=0;i<n;i++){
        val=val*x[v[i]];
        v[i]=(v[i]/x[v[i]]);
    }
    sort(v.begin(),v.end());
    int cash=0;
    for(int i=0;i<n-1;i++){
        cash+=v[i];
    }
    cout<<(cash+(v[n-1]*val))<<endl;
    // if(n==1){
    //     cout<<v[0]<<endl;
    //     return;
    // }
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans+=v[i];
    // }

    // if(v[0]%2==0){
    //     int x=1;
    //     while(v[0]%2==0){
    //         v[0]=v[0]/2;
    //         x=x*2;
    //     }
    //     for(int i=2;i<n;i++){
    //     while(v[i]%2==0){
    //         v[i]=v[i]/2;
    //         x=x*2;
    //     }
    // }
    //     v[1]=v[1]*x;
    // }
    // else{
    // int m=1;
    // for(int i=1;i<n;i++){
    //     while(v[i]%2==0){
    //         v[i]=v[i]/2;
    //         m=m*2;
    //     }
    // }
 
    // v[0]=v[0]*m;
    // }
    //  int val=0;
    // for(int i=0;i<n;i++){
    //     val+=v[i];
    // }
    
    // cout<<max(val,ans)<<endl;
    
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
