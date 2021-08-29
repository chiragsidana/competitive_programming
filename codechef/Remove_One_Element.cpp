#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n-1];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n-1);
        if(n==2){
            int temp1 = arr2[0] - arr1[0];
            int temp2 = arr2[0] - arr1[1];
            if(temp1<temp2 && temp1>0){
                cout<<temp1<<"\n";
            }else if(temp2 > 0){
                cout<<temp2<<"\n";
            }else{
                cout<<temp1<<"\n";
            }
        }else{
            int ans = INT_MAX;
            for(int i=0;i<n;i++){
                if(i==n-1){
                    if(arr2[n-2] - arr1[n-2] == arr2[n-3] - arr1[n-3] && arr2[n-2] - arr1[n-2] > 0){
                        ans = min(ans,arr2[n-2] - arr1[n-2]);
                    }
                }else if(i==0){
                    if(arr2[0] - arr1[1] == arr2[1] - arr1[2] && arr2[0] - arr1[1] > 0){
                        ans = min(ans,arr2[0] - arr1[1]);
                    }
                }else if(arr2[0] - arr1[0] == arr2[n-2] - arr1[n-1] && arr2[0] - arr1[0] > 0){
                    ans = min(ans,arr2[0] - arr1[0]);
                }
            }
            cout<<ans<<"\n";
        }
    }
}