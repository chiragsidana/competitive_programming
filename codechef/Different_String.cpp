#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector <string> arr;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    string m="";
    for(int i=0;i<n;i++){
        if(arr[i][i]=='1'){
            m+='0';
        }
        else{
            m+='1';
        }
    }
    cout<<m<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}