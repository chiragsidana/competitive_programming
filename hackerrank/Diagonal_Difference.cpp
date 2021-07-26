#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
       
    }
    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    int sum2=0;
    int j=n-1;
    for(int i=0;i<n;i++){
       sum2+=arr[i][j];
       j--;
    }
    int sum3=(sum1-sum2);
    if(sum3>=0){
        cout<<sum3;
    }
    else{
        cout<<-(sum3)<<endl;
    }
    return 0;
}