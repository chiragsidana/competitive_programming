#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vs vector<string>
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

int n,m;

int height(char matrix[101][101],int r,int c){
    int i = r;
    int ans = 0;
    while (i >= 0 and matrix[i][c] == '1'){
        ans++;
        i--;
    }
    i = r+1;
    while (i < n and matrix[i][c] == '1'){
        ans++;
        i++;
    }
    return ans;
}

void solve()
{
   cin>>n>>m;
   char matrix[101][101];
   string s;
   rep(i,0,n)
    rep(j,0,m)
       cin>>matrix[i][j];
   rep(i,0,n){
       rep(j,1,m){
            if (matrix[i][j] == matrix[i][j - 1] and matrix[i][j] == '1') {
                if (height(matrix, i, j - 1) != height(matrix, i, j)) {
                    cout << "NO" << endl;
                    return;
                }
            }
       }
   }
    cout << "YES" << endl;
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