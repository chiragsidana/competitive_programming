#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c;
        int m=abs((a-b))*2;
        int abo=abs(a-b);
        int temp1=c+abo;
        int temp2=c-abo;
        
       if((temp1>0) && (temp1<=m) && (temp1!=a) && (temp1!=b) && (a<=m) && (b<=m) && (c<=m)){
           d=temp1;
           cout<<d<<endl;
       }
       else if((temp2>0) && (temp2<=m) && (temp2!=a) && (temp2!=b)&& (a<=m) && (b<=m) && (c<=m)){
           d=temp2;
           cout<<d<<endl;
       }
       else{
           cout<<-1<<endl;
       }
        
        
    }
    return 0;
}