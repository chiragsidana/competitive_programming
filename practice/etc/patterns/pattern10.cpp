#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
       
      int i,j,n;
      cin>>n;
      for(i=1;i<=n;i++){
          for(j=1;j<=2*n-1;j++){
              if(j<=n-i||j>2*n-i){
                  cout<<" ";
              }
              else{
                  cout<<"*";
              }

          }
          cout<<endl;
      }
    return 0;
}