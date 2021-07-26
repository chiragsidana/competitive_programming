#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
int x=max(a,max(b,c));
int y=max(x,d);
return y;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b,c,d)<<endl;
    return 0;
}