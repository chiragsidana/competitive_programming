#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
     int n,m,i,j;
     cin>>n;
     m=n;
     for(i=1;i<=n;i++){
         for(j=1;j<=m;j++){
             cout<<"*";
         }
         m=m-1;
         cout<<endl;
     }
     

    return 0;
}