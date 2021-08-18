#include<bits/stdc++.h>
#define xx long long 
using namespace std;
int main(){
    xx t;
    cin>>t;
    while(t--){
        xx n,p,k;
        cin>>n>>p>>k;
        xx repeat=n/k;
        xx rem=n%k;
        xx final=1;
        if(rem<=(p%k))
        {
            final+=rem;
        }
        else 
        {
            final+=(p%k);
        }
        final+=(repeat*(p%k));
        final+=(p/k);
        cout<<final;
        cout<<endl;
    } 
    return 0;
}