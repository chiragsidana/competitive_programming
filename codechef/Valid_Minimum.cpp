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
    int ab,bc,ca;
    cin>>ab>>bc>>ca;
    int count=0;
    if(ab==bc)count++;
    if(bc==ca)count++;
    if(ca==ab)count++;

    if(count==0)cout<<"NO"<<endl;
    else if(ab==bc){
        if(bc>ca)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else if(bc==ca){
        if(bc>ab)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else if(ca==ab){
        if(ab>bc)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else cout<<"YES"<<endl;
    
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