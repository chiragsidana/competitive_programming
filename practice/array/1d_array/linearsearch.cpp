#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;

    }
   
}
return -1;
}
int main(){
    int n;
    cout<<"kitne ki array bnani hai";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   int key;
   cout<<"kya dhoondna hai";
   cin>>key;
   cout<<linearsearch(arr,n,key);
    return 0;
}
