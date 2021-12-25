#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<4){
        cout<<"0"<<endl;
        return;
    }
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    if(count0<2 or count1<2){
        cout<<"0"<<endl;
        return;
    }
    int m=min(count0,count1);
    cout<<m-1<<endl;
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