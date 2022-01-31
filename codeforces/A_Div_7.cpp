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
    int n;cin>>n;
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    // int lastdigit=n%7;
    // for(int i=1;i<=lastdigit;i++){
    //     if((n-i)%7==0){
    //         cout<<n-i<<endl;
    //         return;
    //     }
    // }
    // for(int i=lastdigit+1;i<=9;i++){
    //     if((n+i)%7==0){
    //         cout<<n+i<<endl;
    //         return;
    //     }
    // }
    int lower=(n/10)*10;
    int upper=((n/10)+1)*10;
    for(int i=lower;i<upper;i++){
        if(i%7==0){
            cout<<i<<endl;
            return;
        }
    }
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