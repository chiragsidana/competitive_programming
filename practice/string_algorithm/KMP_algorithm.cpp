#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
vi prefix_function(string s){
    int n=s.size();
    vi pi(n,0);
    rep(i,1,n){
        int j=pi[i-1];
        while(j>0 and s[i]!=s[j])
            j=pi[j-1];
        
        if(s[i]==s[j])
            j++;
        pi[i]=j;
    }
    return pi;
}
int main()
{
    string s="na";
    vi prefix=prefix_function(s);
    // for(auto i:res)
    //     cout<<i<<" ";
    string t="apnacollege";
    int pos=-1;
    int i(0),j(0);
    while(i<t.size()){
        if(t[i]==s[j]){
            j++;
            i++;
        }
        else{
            if(j!=0)
            j=prefix[j-1];
            else
            i++;
        }
        if(j==s.size()){
            pos=i-s.size();
            break;
        }
    }
    cout<<pos;
    cout<<endl;
    return 0;
}