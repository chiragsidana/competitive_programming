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
using namespace std;
void solve()
{
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    int arr[n][m];
    bool chirag=false;
    
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        // cout<<temp;
        for(int j=0;j<m;j++){
            
            if(temp[j]=='B'){
                arr[i][j]=0;
                chirag=true;
            }
            else arr[i][j]=1;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
    if(arr[r-1][c-1]==0){
        cout<<0<<endl;
        return;
    }
    if(chirag){
        for(int i=0;i<m;i++){
            if(arr[r-1][i]==0){
                cout<<1<<endl;
                return;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i][c-1]==0){
                cout<<1<<endl;
                return;
            }
        }
        cout<<2<<endl;
        return;
    }
    else cout<<-1<<endl;
    return;
    
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