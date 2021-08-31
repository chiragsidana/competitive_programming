#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long count = 1;
    for(int i=1;i<n-1;i++){
        if(arr[i] <= arr[i-1]){
            count++;
        }
    }
    cout<<count<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}