#include<bits/stdc++.h>
using namespace std;
//github//
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        char ch;
        bool b=true;
        int ele;
        vector<pair<char,int> > v;
        for(int i=0;i<q;i++){
            cin>>ch;
            cin>>ele;
            v.push_back(make_pair(ch,ele));
        }
       int arr[n+1]={0};
       int count=0;
       for(int i=0;i<q;i++){
           if((v[i].first)=='+'){
               arr[v[i].second]++;
               count++;
           }
           else if((v[i].first)=='-'){
               arr[v[i].second]--;
               count--;
           }
            if((count>m)||((arr[v[i].second])<0)){
                cout<<"Inconsistent"<<endl;
                b=false;
                break;
            }
            
       }
    if(b)
    cout<<"Consistent"<<endl;
}
return 0;
}