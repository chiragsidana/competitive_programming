#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
         if(num%i==0){
             return false;
         }
    }
    return true;
}




int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
     int a,b,i;
     cin>>a>>b;
     for(i=a;i<=b;i++){
         if(isprime(i)){
             cout<<i<<endl;
         }
     }

    return 0;
}