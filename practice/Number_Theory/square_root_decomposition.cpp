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
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int len=sqrtl(n)+1;
    vi b(len);
    rep(i,0,n){
        b[i/len]+=a[i];
    }
    int q;cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int sum=0;
        for(int i=l;i<=r;){
            if(i%len==0 and i+len-1<=r){
                sum+=b[i/len];
                i+=len;
            }
            else{
                sum+=a[i];
                i++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}