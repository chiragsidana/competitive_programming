#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b){
    int temp=*a+*b;
    if(*a-*b>0){
        *b=*a-*b;
    }
    else{
        *b=-(*a-*b);
    }
    *a=temp;
    
    
}
int main(){
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl<<b;
    
    return 0;
}