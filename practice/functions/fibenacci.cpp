#include<iostream>
#include<math.h>
using namespace std;

void fib (int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for( int i;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}



int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
   int n;
   cin>>n;
   fib(n);
    return 0;
}