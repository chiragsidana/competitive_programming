#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,count=0;
        cin>>n;
      for(int c=1;c<n;c++ ){
            int b=2*c;
            while(b<=n){
                a=c;
                if(b%c==0){
                    while(a<=n){
                        if(a%b==c){
                            count++;
                        }
                        a+=b;
                    }
                }
                b+=c;
            }
      }
      cout<<count<<'\n';
    }
    return 0;
}