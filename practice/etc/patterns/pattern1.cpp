#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif

         int row,col,i,j;
         cin>>row>>col;
         for(i=1;i<=row;i++){
             for(j=1;j<=col;j++){
                 cout<<"*";
             }
             cout<<endl;
         }


    return 0;
}