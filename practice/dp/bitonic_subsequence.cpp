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
   int n=8;
   vi a={1,11,2,10,4,5,2,1};
   vi forward(n,1);
   vi backward(n,1); 
   rep(i,0,n){
       rep(j,0,i){
           if(a[i]>a[j])
                forward[i]=max(forward[i],1+forward[j]);
       }
   }
   for(int i=n-1;i>=0;i--){
       for(int j=n-1;j>i;j--){
           if(a[i]>a[j]){
               backward[i]=max(backward[i],1+backward[j]);
           }
       }
   }
   int ans=0;
   rep(i,0,n){
       ans=max(ans,forward[i]+backward[i]-1);
   }cout<<ans;
    return 0;
}