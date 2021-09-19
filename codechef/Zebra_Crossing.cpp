#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int start=s[0];
int count=0;
for(int i=1;i<n;i++){
if(s[i]!=start){
count++;
start=s[i];
}

}
if(count<k){
    cout<<"-1"<<endl;
}
else{
   if(k%2==0){
      for(int i=n-1;i>0;i--){
          if(s[i]==s[0]){
              cout<<i+1<<endl;
              return;
          }
      }
   }
   else{
       for(int i=n-1;i>0;i--){
          if(s[i]!=s[0]){
              cout<<i+1<<endl;
              return;
          }
      }
   }
   
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