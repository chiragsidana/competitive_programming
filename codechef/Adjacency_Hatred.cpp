#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    // vector<int> v;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     v.push_back(temp);
    // }

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> even;
    vector<int> odd;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    if((odd.size()==n) || (even.size()==n)){
        cout<<"-1"<<endl;
    }
    else
   { 
       for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
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