#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
          
      int n,m;
      cout<<"enter two no.s";
      cin>>n>>m;

        char op;
        cout<<"enter the operation";
        cin>>op;

        switch (op)
        {
            case '+':
            cout<<n+m;
            break;
            case '-':
            cout<<n-m;
            break;
             case '*':
            cout<<n*m;
            break;
             case '/':
            cout<<n/m;
            break;
        }
     


    return 0;
}