#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;cin>>n;
    string s,p;
    cin>>s;
    cin>>p;
    int ans=0;
    int sv=0,sc=0,pv=0,pc=0;
    vector<char> temp;
    for(int i=0;i<n;i++){
        if(s[i]=='?' and !(p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u')){
             
             if (!(std::find(temp.begin(), temp.end(), p[i]) != temp.end())) {
                          sv++;

                        if(p[i]!='?')  temp.push_back(p[i]);
                  }
                  
            
           
        }
        if(s[i]=='?' and (p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u')){
              if (!(std::find(temp.begin(), temp.end(), p[i]) != temp.end())) {
                          sc++;
                         if(p[i]!='?') temp.push_back(p[i]);
                  }
                 
        }
    }
    vector<char> temp2;
    for(int i=0;i<n;i++){
        if(p[i]=='?' and !(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
            if (!(std::find(temp2.begin(), temp2.end(), s[i]) != temp2.end())) {
                          pv++;
                        if(s[i]!='?')  temp2.push_back(s[i]);
                  }
                 
        }
        if(p[i]=='?' and (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
             if (!(std::find(temp2.begin(), temp2.end(), s[i]) != temp2.end())) {
                          pc++;
                        if(s[i]!='?')  temp2.push_back(s[i]);
                  }
                 
        }
    }
    int final=max(sv,max(sc,max(pv,pc)));
    //cout<<final<<endl;

    if((final==sv or final== sc) and final==1){
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                s[i]=p[i];
            }
        }
    }
    if((final==pv or final== pc) and final==1){
        for(int i=0;i<n;i++){
            if(p[i]=='?'){
                p[i]=s[i];
            }
        }
    }
    if((final==sv or final==pv) and final!=1){
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                s[i]='a';
            }
            if(p[i]=='?'){
                p[i]='a';
            }
        }
        
    }
     if((final==sc or final==pc) and final!=1){
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                s[i]='z';
            }
            if(p[i]=='?'){
                p[i]='z';
            }
        }
        
    }
for(int i=0;i<n;i++){
  if((p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u') and !(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
     if(p[i]!=s[i]) ans++;
  } 
  if((p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u') and (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
      if(p[i]!=s[i]) ans+=2;
  }
  if(!(p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u') and !(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
      if(p[i]!=s[i]) ans+=2;
  }
  if(!(p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u') and (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')){
      if(p[i]!=s[i]) ans++;
  }
    // cout<<ans<<endl;
}

cout<<ans<<endl;

}
signed main()
{
    FastIO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}