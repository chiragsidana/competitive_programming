#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    int distAB=abs(x)+abs(y);
    int x1,x2;
    x1=distAB/2,x2=0;
    while(x1>-1){
        if((abs(x1-0)+abs(x2-0)) == distAB/2){
            if((abs(x1-x)+abs(x2-y))==distAB/2){
                cout<<x1<<" "<<x2<<endl;
                return;
            }
        }
        x1--;x2++;
    }
    cout<<-1<<" "<<-1<<endl;
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