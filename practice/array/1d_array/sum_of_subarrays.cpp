#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            sum=sum+arr[k];
            cout<<sum<<" ";
           
        }
         sum=0;
    }
    return 0;
}