#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
void solve()
{
    string s;
    cin>>s;
    unordered_map<int,int> mpp;
    int n=s.length();
    rep(i,0,n){
        mpp[s[i]-'0']++;

    }
    int ans=INT_MAX;
    bool b=false;
     if(mpp[0]>1)
    {
        int c=0;int in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0'&&c>0)
            {
                in=i;
                b=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(b){
        in=n-in-2;
        ans=min(ans,in);}
    }
    b=false;
    if(mpp[0]>0&& mpp[5]>0)
    {
        int c=0;int in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='5'&&c>0)
            {
                in=i;
                b=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(b){
        in=n-in-2;
        ans=min(ans,in);}
    }
    b=false;
    if(mpp[7]>0&&mpp[5]>0)
    {
        int c=0;int in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='7'&&c>0)
            {
                in=i;
                b=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(b){
        in=n-in-2;
        ans=min(ans,in);}
    }
    b=false;
    if(mpp[2]>0&&mpp[5]>0)
    {
        int c=0;int in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='2'&&c>0)
            {
                in=i;
                b=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(b){
        in=n-in-2;
        ans=min(ans,in);}
    }
    if(mpp[0]>0)
    {
        ans=min(ans,n-mpp[0]);
    }
    cout<<ans<<"\n";
    
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