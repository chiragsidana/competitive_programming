#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[10];
    while(t--){
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        if((arr[0]+arr[2]+arr[4]+arr[6]+arr[8])>(arr[1]+arr[3]+arr[5]+arr[7]+arr[9])){
            cout<<"1"<<endl;
        }
        else if((arr[0]+arr[2]+arr[4]+arr[6]+arr[8])<(arr[1]+arr[3]+arr[5]+arr[7]+arr[9]))
        {
            cout<<"2"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
