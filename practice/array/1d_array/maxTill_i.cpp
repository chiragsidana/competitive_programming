#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  m=0;
    for(int i=0;i<n;i++){
        
        m=max(m,arr[i]);
        cout<<m<<" ";
    }
    
    return 0;
}