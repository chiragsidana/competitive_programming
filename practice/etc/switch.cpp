#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
          
          char button;
          cout<<"input the character";
          cin>>button;

          switch (button)
          {
              case 'a':
              cout<<"nmaste";
              break;
              case 'b':
              cout<<"hola";
              break;
              default:
              cout<<"shi se daal";
              break;
          }

        
     


    return 0;
}