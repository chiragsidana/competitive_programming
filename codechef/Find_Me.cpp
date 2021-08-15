#include<bits/stdc++.h>
using namespace std;
//github//
int linearsearch(int arr[],int n,int k){
for(int i=0;i<n;i++){
    if(arr[i]==k){
        return 1;
    }
  
    
}
return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
  
   cout<<linearsearch(arr,n,k);
    return 0;
}