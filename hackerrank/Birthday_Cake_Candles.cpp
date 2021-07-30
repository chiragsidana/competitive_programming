#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
    int brr[maxi+1];
    for(int i=0;i<maxi+1;i++){
        brr[i]=0;
        cout<<brr[i]<<",";
    }
    cout<<endl;
    for(int i=0;i<maxi+1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                brr[i]++;
            }
        }
        cout<<brr[i]<<",";
    }
    cout<<endl;
  int naxi=INT_MIN;
    for(int i=0;i<maxi+1;i++){
            naxi=max(naxi,brr[i]);
    }
    cout<<naxi;
    return 0;
}