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
int main()
{
    int n;cin>>n;
    vi arr(n);
    for(auto &i:arr){
        cin>>i;
    }
    vi jumps(n,MOD);
    if(arr[0]==0){
        cout<<MOD<<" ";
        return 0; 
    }
   
    jumps[0]=0;
    rep(i,1,n){
        rep(j,0,i){
            if(i<=(j+arr[j])){
                jumps[i]=min(jumps[i],jumps[j]+1);
                
            }
        }
    }
    cout<<jumps[n-1];
    return 0;
}