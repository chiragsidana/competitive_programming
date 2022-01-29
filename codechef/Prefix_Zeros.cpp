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
bool chakka(int mid, string& s, int n, int k)
{
    int sidana = 0;
    for(int i = mid-1; i >= 0; i--)
    {
        if(k < 0)
        {
            return false;
        }
        int chirag = (int) (s[i] - '0');
        chirag += sidana;
        chirag %= 10;
        k -= (10-chirag)%10;
        sidana += (10-chirag)%10;
        if(k < 0)
        {
            return false;
        }
    }
    return (k >= 0);
}
void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
      int start = 1, end = n, ans = 0;
        while(start <= end)
        {
            int mongu = start - (start - end)/2;
            if(chakka(mongu, s, n, k))
            {
                ans = mongu;
                start = mongu + 1;
            }
            else
            {
                end = mongu - 1;
            }
        }

        cout << ans << endl;
    
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