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
int p=31;
vi powers(N);
int main()
{
    string s="na";
    string t="apnaacollegena";
    int T=t.size(),S=s.size();
    powers[0]=1;
    rep(i,1,N){
        powers[i]=(powers[i-1]*p)%MOD;
    }
    vi h(T+1,0);
    rep(i,0,T){
       h[i+1]=(h[i]+(t[i]-'a'+1)*powers[i])%MOD;

    }
    int h_s=0;
    rep(i,0,S){
        h_s=(h_s+(s[i]-'a'+1)*powers[i])%MOD;
    }
    for(int i=0;i+S-1<T;i++){
        int cur_h=(h[i+S]-h[i]+MOD)%MOD;
        if(cur_h==(h_s*powers[i])%MOD){
            cout<<"found at index"<<i<<endl;
        }
    }
    return 0;
}