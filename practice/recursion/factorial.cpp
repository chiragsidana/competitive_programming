#include<bits/stdc++.h>
using namespace std;
int facto(int n){
    if(n==1){
        return 1;
    }
    int prevfacto=facto(n-1);
    return n*prevfacto;
}
int main(){
    int n;
    cin>>n;
    cout<<facto(n)<<endl;
    return 0;
}