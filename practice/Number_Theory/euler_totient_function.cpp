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
int totient[N];
int main()
{
    rep(i,0,N){
        totient[i]=i;
    }
    rep(i,2,N){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){
                totient[j]*= i-1;
                totient[j]/=i;
            }
            totient[i]=i-1;
        }
    }
    rep(i,2,11){
        cout<<totient[i]<<" ";
    }
    return 0;
}