#include<bits/stdc++.h>
using namespace std;
int main(){
    //max_heap
    priority_queue<int> maxi;
    //min_heap
    priority_queue<int,vector<int> , greater<int> > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size-> "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    cout<<"khali hai kya -> "<<mini.empty()<<endl;
    return 0;
}