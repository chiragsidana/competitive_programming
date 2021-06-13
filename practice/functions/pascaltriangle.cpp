#include<iostream>
#include<math.h>
using namespace std;

int fact( int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}


int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
   int n,i,j;
   cin>>n;
   for(i=0;i<n;i++){
       for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
          
       }
       cout<<endl;
   }
  
    return 0;
}