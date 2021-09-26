#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    bool b=0;
      
    for(int i=0;i<n;i++)
{
    arr[i]=i+1;
}
if(n%4==0){
 int arr1[n/2];
 int arr2[n/2];

// for(int i=0;i<n/2;i++){
//     arr1[i]
// }
cout<<"YES"<<endl;
for(int i=0;i<n/4;i++){
    cout<<i+1<<" ";
}
for(int i=((3*n)/4);i<n;i++){
    cout<<i+1<<" ";
}cout<<endl;
for(int i=((n)/2);i<((3*n)/4);i++){
     cout<<i+1<<" ";
}
for(int i=((n)/4);i<((n)/2);i++){
     cout<<i+1<<" ";
}
// for(int i=0;i<n/2;i++){
//     cout<<arr1[i]<<" ";
// }cout<<endl;
// for(int i=0;i<n/2;i++){
//     cout<<arr2[i]<<" ";
// }
cout<<endl;
}
else{
    cout<<"NO"<<endl;
}


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}