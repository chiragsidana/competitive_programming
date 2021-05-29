#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
        int i,j,m,n;
        cin>>n;
        m=n;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                cout<<j;
                
                 }
                 m=m-1;
                 cout<<endl;
        }
     

    return 0;
}