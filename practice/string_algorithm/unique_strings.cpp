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
int calculate_hash(string s){
    int hash=0;
    rep(i,0,s.size()){
        hash=(hash+(s[i]-'a'+1)*powers[i])%MOD;
    }
    return hash;
}

int main()
{
    powers[0]=1;
    rep(i,1,N){
        powers[i]=(powers[i-1]*p)%MOD;
    }
    vector<string> strings={"aa","ab","aa","b","cc","aa"};
    // sort(all(strings));
    // int distinct=0;
    // rep(i,0,strings.size()){
    //     if(i==0 or strings[i]!=strings[i-1]){
    //         distinct++;
    //     }
    // }
    // cout<<distinct;
    vi hashes;
    for(auto w:strings){
        hashes.push_back(calculate_hash(w));
    }
    sort(all(hashes));
    int distinct=0;
    rep(i,0,hashes.size()){
        if(i==0 or hashes[i]!=hashes[i-1]){
            distinct++;
        }
    }
    cout<<distinct;


    return 0;
}