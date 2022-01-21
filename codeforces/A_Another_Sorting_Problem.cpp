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
using namespace std;
const int N=1e3+2;
pair<string,int> p[1000001];
int main()
{
    int n,m;
    cin>>n>>m;
    rep(i,1,n+1){
        string s;
        cin>>s;
        for(int j=1;j<m;j+=2){
            s[j]=155-s[j];
            p[i]={s,i};
        }
        
    }
    sort(p+1,p+n+1);
    rep(i,1,n+1){
        cout<<p[i].ss<<" ";
    }
    return 0;
}