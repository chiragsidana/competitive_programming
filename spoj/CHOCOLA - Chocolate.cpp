#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int m,n;
    cin>>m>>n;
    int x[m],y[n];
    for(int i=1;i<m;i++){
        cin>>x[i];
    }
    for(int i=1;i<n;i++){
        cin>>y[i];
    }
    sort(x+1,x+m);
    sort(y+1,y+n);
    reverse(x+1,x+m);
    reverse(y+1,y+n);
    int dx=1,dy=1;
    int i=1,j=1,ans=0;
    while(i<m and j<n){
        if(x[i]>y[j]){
            ans+=x[i]*dy;
            dx++;
            i++;
        }
        else{
            ans+=y[j]*dx;
            dy++;
            j++;
        }
    }
    if(i<m){
        int sum=0;
        while(i<m){
            sum+=x[i];
            i++;
        }
        ans+=sum*dy;
    }
    else{
        int sum=0;
        while(j<n){
            sum+=y[j];
            j++;
        }
        ans+=sum*dx;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

