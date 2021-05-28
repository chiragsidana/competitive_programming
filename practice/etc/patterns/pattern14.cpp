#include<iostream>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
     

    int i,j,n;
    cin>>n;
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
                
        }
        cout<<endl;
    }

    return 0;
}