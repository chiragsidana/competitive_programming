#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif

       int date;
       int paisa=3000;
       for(date=1;date<=30;date++){
           if(date%2==0){
               continue;
           }
           if(paisa==0){
               break;
           }
           cout<<"go out";
           paisa=paisa-300;
       } 



    return 0;
}