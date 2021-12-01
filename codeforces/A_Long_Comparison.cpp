#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int x1,p1;
    cin>>x1>>p1;
    int x2,p2;
    cin>>x2>>p2;
    int x11=x1;
    int x22=x2;

    int nx1=0;
    int nx2=0;
    while(x11!=0){
        nx1++;
        x11=x11/10;
    }
    while(x22!=0){
        nx2++;
        x22=x22/10;
    }
    int diff=abs(nx1-nx2);
    if(nx1>nx2){
        diff=min(diff,p2);
        x2=x2* pow(10,diff);
        p2-=diff;
    }
    if(nx2>nx1){
        diff=min(diff,p1);
        x1=x1* pow(10,diff);
        p1-=diff;
    }
    if(p1>p2){
        cout<<'>'<<endl;
    }
    else if(p2>p1){
        cout<<'<'<<endl;
    }
    else{
        if(x1>x2){
            cout<<'>'<<endl;
        }
        else if(x2>x1){
            cout<<'<'<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }

    // if((nx1+p1)==(nx2+p2)){
    // if((x1*pow(10,p1))>(x2*pow(10,p2))){
    //     cout<<'>'<<endl;
    // }
    // else if((x1*pow(10,p1))<(x2*pow(10,p2))){
    //     cout<<'<'<<endl;
    // }
    // else{
    //     cout<<'='<<endl;
    // }
    // }
    // else if(nx1+p1>nx2+p2){
    //     cout<<'>'<<endl;
    // }
    // else{
    //     cout<<'<'<<endl;
    // }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}
