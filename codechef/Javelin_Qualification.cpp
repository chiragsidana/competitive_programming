#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
     int n,m,x;
    cin>>n>>m>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=m){
            count++;
        
        }
        
    }
int chi[count]={0};
int y=0;
    if(count>=x){
        cout<<count<<" ";
        for(int i=0;i<n;i++){
            if(arr[i]>=m){
                chi[y]=i+1;
                 y++;
            }
           
        }
        for(int i=0;i<count;i++){
            cout<<chi[i]<<" ";
        }
    }
    else{
        cout<<x<<" ";
        int div[x]={0};
        int c=0;
        int ind[n]={0};
        int ele;
        int e=INT_MIN;
        while(c<=x){
            for(int j=0;j<=x;j++){
            for(int i=0;i<n;i++){
                e=max(e,arr[i]);
                if(e==arr[i])
                {
                    ele=i+1;
                }
            }
            ind[j]=ele;
            
             div[c]=ele;
             arr[ele-1]=-1;
             c++;
            e=INT_MIN;
            }
            
        }
        sort(div,div+x);
        for(int i=0;i<x;i++){
            cout<<div[i]<<" ";
        }
    }
    cout<<'\n';
    }
    return 0;
}