#include<bits/stdc++.h>
using namespace std;
int knapsack(int value[],int wt[],int n,int w){
    if(n==0||w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return 0;
    }
 int x= knapsack(value,wt,n-1,w-wt[n-1])+value[n-1];        //agar nth item ko include krte
   int y= knapsack(value,wt,n-1,w);                        //agar nth item ko include nhi krte
int maximum=max(x,y);
return maximum;
}
int main(){
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int w=50;
    cout<<knapsack(value,wt,3,w)<<endl;
    return 0;
}