#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        m=m-1;
    }
    return 0;
}