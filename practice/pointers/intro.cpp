#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int* aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a;
    return 0;
}