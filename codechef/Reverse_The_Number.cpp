#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int i=0;
        while(s[i]=='0')
        {
            i++;
        }
        for(int j=i;j<s.size();j++)
        {
            cout<<s[j];
        }
        cout<<'\n';
    }
}
int main(){
    solve();
    return 0;
}