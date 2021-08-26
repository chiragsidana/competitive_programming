#include<bits/stdc++.h>
using namespace std;
bool check(int arr[]){
     bool m;
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            return false;
        }
      
    }
   return true;
}
void solve(){
string s;
cin>>s;
int arr[26]={0};
int m=(s.size()/2);
for(int i=0;i<m;i++){
arr[s[i]-'a']++;
}
 m=((s.size()+1)/2);
for(int i=m;i<s.size();i++){
    arr[s[i]-'a']--;
}
if(check(arr)){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){

    
    solve();
    }
    return 0;
}