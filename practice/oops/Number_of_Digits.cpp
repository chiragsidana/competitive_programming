#include<bits/stdc++.h>
using namespace std;

int digitCount(int n){
    if(n<10){
        return 1;
    }
    return (1 + digitCount(n/10));
     
}

int main(){
    int n;
    cin>>n;
    int ans = digitCount(n);
    cout<<ans<<endl;
}