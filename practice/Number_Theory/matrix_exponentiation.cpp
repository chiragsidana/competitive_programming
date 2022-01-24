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
vvi multiply(vvi &a,vvi &b){
  int n=a.size();
  vvi ans(n,vi(n,0));
  rep(i,0,n){
      rep(j,0,n){
          rep(k,0,n){
              ans[i][j]+=a[i][k]*b[k][j];
          }
      }
  }
  return ans;
}
vvi matrixExponentiate(vvi &a,int n){
    if(n==0){
        int sz=a.size();
        vvi ans(sz,vi(sz,0));
        rep(i,0,sz){
            ans[i][i]=1;
        }
        return ans;
    }
    if(n==1){
        return a;
    }
    vvi temp=matrixExponentiate(a,n/2);
    vvi ans=multiply(temp,temp);
    if(n&1){
        ans=multiply(ans,a);
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vvi a={{1,1},{1,0}};
    vvi ans=matrixExponentiate(a,n);
    int sz=ans.size();
    rep(i,0,sz){
        rep(j,0,sz){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}