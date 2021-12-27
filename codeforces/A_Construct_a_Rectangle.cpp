#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    int m=max(l1,max(l2,l3));
    if(m==l1){
        if(m==l2+l3){
            cout<<"YES"<<endl;
            return;
        }
    }
     if(m==l2){
        if(m==l1+l3){
            cout<<"YES"<<endl;
            return;
        }
    }
     if(m==l3){
        if(m==l2+l1){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(l1==l2 and l3%2==0){
        cout<<"YES"<<endl;
        return;
    }
     if(l2==l3 and l1%2==0){
        cout<<"YES"<<endl;
        return;
    }
     if(l3==l1  and l2%2==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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