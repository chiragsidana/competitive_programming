#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool isSubsequence(string s, string t) {
        
        int f = 0;
        int temp = 0;
        for(int i=0; i<s.size(); i++){
            
            int j=temp;
            while(j<t.size()){
                if(t[j] == s[i]){
                    temp = j+1;
                    break;
                }
                j++;
            }
            if(j >= t.size()){
                f = 1;
                break;
            }
            
        }
        
        if(f == 1) return false;
        return true;
    }
void solve()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    sort(s.begin(),s.end());
    map<char,int> np;
    int x=s.length();
    for(int i=0;i<x;i++){
        np[s[i]]++;
    }
    string ans="";
    if(t=="abc" and np['a']>0 and np['b'] and np['c']>0){
        bool check=true;
        string temp="";
        for(auto y:np){
            if(y.first=='a'){
                for(int i=0;i<y.second;i++){
                    ans+=y.first;
                }
            }
            else if(y.first=='b'){
                for(int i=0;i<y.second;i++){
                    temp+=y.first;
                }
            }
            else if(y.first=='c'){
                for(int i=0;i<y.second;i++){
                    ans+=y.first;
                }
                if(check){
                    ans+=temp;
                    check=false;
                }
            }
            else{
                if(check){
                    ans+=temp;
                    check=false;
                }
                for(int i=0;i<y.second;i++){
                    ans+=y.first;
                }
            }
            
        }
    }
    else{
        for(auto y:np){
            for(int i=0;i<y.second;i++){
                ans+=y.first;
            }
        }
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