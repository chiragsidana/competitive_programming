#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n=t;
    int mrr[n];
    int j=0;
    while(t--){
        int arr[6];
        for(int i=0;i<6;i++){
            cin>>arr[i];
        }
        cout<<((arr[0]+arr[1]+arr[2])>(arr[3]+arr[4]+arr[5])?1:2)<<'\n';
        //     mrr[j]=1;
        //     j++;
        // }
        // else{
        //     mrr[j]=2;
        //     j++;
        // }
        // cout<<mrr[j-1]<<'\n';
    }
    return 0;
}