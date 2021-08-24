#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
    if((a==b)&&(b==c)){
        cout<<'1'<<endl;
    }
    else if(((a==b)&&(b!=c))||((c==b)&&(b!=a))||((a==c)&&(c!=b))){
        cout<<'2'<<endl;
    }
    else{
        cout<<'3'<<endl;
    }
}
else{
    cout<<'-'<<'1'<<endl;
}
}
int main(){
    solve();
    return 0;
}