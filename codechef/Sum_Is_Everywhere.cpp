#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long odd=0,even=0;
    int arr[2*n];
    for(int i=0;i<(2*n);i++){
        arr[i]=i+1;
    }
    for(int i=0;i<(2*n);i++){
        if(i%2==0){
            odd=odd+arr[i];
        }
        else{
            even=even+arr[i];
        }
    }
    cout<<odd<<" "<<even;
    return 0;
}