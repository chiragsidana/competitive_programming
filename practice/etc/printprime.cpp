#include<iostream>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
    int i,a,b,n;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        for(n=2;n<i;n++){
            if(i%n==0){
                break;
            }
        }
        if(i==n){
            cout<<i<<endl;
        }
    }
    

      
    return 0;
}