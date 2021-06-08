#include<iostream>
using namespace std;
int main(){
  
    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime"<<endl;
            break;
        }
        
    }
    cout<<"prime"<<endl;
    return 0;

}