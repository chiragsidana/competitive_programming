#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
     int n,i,j,space;
     cin>>n;
     for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
             cout<<"*";
         }
          space=2*n-2*i;
     for(j=1;j<=space;j++){
         cout<<" ";
     }
      for(j=1;j<=i;j++){
             cout<<"*";
         }
         cout<<endl;
     }
     for(i=n;i>=1;i--){
         for(j=1;j<=i;j++){
             cout<<"*";
         }
          space=2*n-2*i;
     for(j=1;j<=space;j++){
         cout<<" ";
     }
      for(j=1;j<=i;j++){
             cout<<"*";
         }
         cout<<endl;
     }
    
     

    return 0;
}