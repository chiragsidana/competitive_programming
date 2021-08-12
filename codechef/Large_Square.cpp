#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int count=0;
        for(int i=1;i<=n;i++){
            if(n>=(i*i)){
                count++;
            }
            else
            break;
        }
        cout<<(count*a)<<endl;
    }
    return 0;
}