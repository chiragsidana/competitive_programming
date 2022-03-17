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
    int n,m;cin>>n>>m;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int arr[n][m];
    rep(i,0,n){
        rep(j,0,m){
            if((i+j)%2==0){
                arr[i][j]=7;
            }
            else arr[i][j]=6;
        }
    }
    if(arr[x1-1][y1-1]!=6){
        rep(i,0,n){
            rep(j,0,m){
                if(arr[i][j]==6){
                    arr[i][j]=7;
                }
                else{
                    arr[i][j]=6;
                }
            }
        }
    }
    if(arr[x1-1][y1-1]!=arr[x2-1][y2-1]){
       rep(i,0,n){
           rep(j,0,m){
               if(arr[i][j]==6){
                   arr[i][j]=1;
               }
               else arr[i][j]=2;
           }
       }
    }
    else{
        arr[x1-1][y1-1]=1;
        arr[x2-1][y2-1]=2;
        rep(i,0,n){
            rep(j,0,m){
                if(arr[i][j]==7){
                    arr[i][j]=3;
                }
                if(arr[i][j]==6){
                    arr[i][j]=2;
                }
            }
        }
    }
    rep(i,0,n){
            rep(j,0,m){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
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