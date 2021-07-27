#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[3];
    int arr2[3];
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    int s1=0;
    int s2=0;
    for(int i=0;i<3;i++){
        if(arr1[i]>arr2[i]){
            s1++;
        }
        else if(arr2[i]>arr1[i]){
            s2++;
        }
    }
    cout<<s1<<" "<<s2;
    return 0;
}