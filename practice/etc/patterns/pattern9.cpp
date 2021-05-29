#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
       
        int i,j,k,m,n;
        m=0;
        k=1;
        cin>>n;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(i%2==0){
                    cout<<m;
                    m=!m;
                }
                else{
                    cout<<k;
                    k=!k;
                }
            }
            m=0;
            k=1;
            cout<<endl;
        }
    return 0;
}