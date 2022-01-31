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
    string s ;
    cin >> s;
    int zeroes = 0 , ones = 0  ;
    for(char x : s)
    {
        if(x == '0')zeroes++ ;
        else ones++ ;
    }
    if(zeroes == ones && s.size() == 2)
    {
        cout << 0 << endl;
    }
    else if (zeroes == ones && s.size() > 2)
    {
        if(s.back() == '0')
        {
            cout << min(zeroes - 1  , ones) << endl;
        }
        else
        {
            cout << min(zeroes   , ones - 1) << endl;
        }
    }
    else
    {
        cout << min(zeroes   , ones) << endl;
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