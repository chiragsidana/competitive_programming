#include<bits/stdc++.h>
using namespace std;
int main(){
    //ek to linear search ka option hai 
    //pr is mein given hai ki matrix row or coloumn dono mein sorted(ascending) hai
    //to hm complexity ko km krne ke liye sorted vali cheez ka fayda uthayenge
    //top right element se start krenge or agar element chota hai to left agar bda hai to neeche ez
    int n,m,target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;  //r-row c-col
    bool found=false;
    while(r<n&&c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}