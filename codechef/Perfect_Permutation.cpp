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
// void solve() {
//     int n, k;
//     cin >> n >> k;
//     int a[k + 1];
//     fr(i, 1, k)cin >> a[i];
//     int ans[n + 1] = { 0 };
//     int curr = 1;
//     fr(i, 1, k) {
//         int j = a[i];
//         while (j >= 1 and ans[j] == 0) {
//             ans[j--] = curr++;
//         }
//     }
//     int j = n;
//     while (j >= 1 and ans[j] == 0) {
//         ans[j--] = curr++;
//     }
//     fr(i, 1, n)
//         cout << ans[i] << " ";
//     cout << endl;
// }
void solve()
{
    int n, k;
    cin >> n >> k;
    vi X(n+1);
    rep(i,1,n+1){
        X[i] = i;
    }
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    k = n - k;
    if (k & 1){
        swap(X[1], X[2]);
    }
    int sovik = k / 2;
    int lund = n;
    while (sovik--) {
        swap(X[lund], X[lund - 1]);
        lund -= 2;
    }
    rep(i,1,n+1)cout << X[i] << " ";
    cout << endl;
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