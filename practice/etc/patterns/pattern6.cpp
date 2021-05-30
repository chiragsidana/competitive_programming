#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
     int n,m,i,j,k;
     cin>>n;
     m=1;
     k=1;
     for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
            if(j<=m){
                cout<<k<<" ";
                k=k+1;
            }
            else{
                cout<<" ";
            }
         }
         m=m+1;
         cout<<endl;
     }
     

    return 0;
}