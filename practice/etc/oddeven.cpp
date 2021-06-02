#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif

       int n;
       cin>>n;
       if(n%2==0){
           cout<<"even";
       }   
       else{
           cout<<"odd";
       }



    return 0;
}