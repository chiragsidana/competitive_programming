#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int size=2*n-1;
    int start(0),end(size-1);
    char arr[size][size];
    char flag='X';
    while(n!=0){
        for(int i=start;i<=end;i++){
            for(int j=start;j<=end;j++){
                if(i==start or i==end or j==start or j==end){
                    arr[i][j]=flag;
                }
            }
        }
        if(flag=='X')flag='O';
        else flag='X';
        n--;
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
