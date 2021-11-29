#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    // priority_queue<int,vector<int>,greater<int>>q;
    // while(n>0){
    //     q.push(n%10);
    //     n=n/10;
    // }
    // while(k>0){
    //     int l=q.top();
    //     if(l<9){
    //         k--;
    //         q.pop();
    //         q.push(l+1);
    //         continue;
    //     }
    //     break;
    // }
    // int val=1;
    // while(q.empty()!=true){
    //     val=val*q.top();
    //     q.pop();
    // }
    // cout<<val<<endl;


    if(k==0){
        int ans=1;
        while(n!=0){
            ans=(ans*(n%10));
            n=n/10;
        }
        cout<<ans<<endl;
        return;
    }
    
    while(k--){
    int m=n;
    int p=10;
    int l=-1;
    int x;
        while(m!=0){
            x=(m%10);
            if(x<=p){
            l++;
            }
            p=min(x,p);
            m=m/10;
        }
        int t=(int)(pow(10,l)+0.5);
        n=n+t;
        
    }
    int val=1;
    while(n!=0){
            val=(val*(n%10));
            n=n/10;
        }
        cout<<val<<endl;


}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
