#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool check(vector<int> v,int n,int x){
    int m=0,tmp[n];
    bool bhalla=true;
    for(int i=0;i<n;i++){
        if(v[i]!=x){
            tmp[m]=v[i];
            m++;
        }
    }
    for(int i=0;i<m;i++){
        if(tmp[i]!=tmp[m-i-1]){
            bhalla=false;
        }
    }
    if(bhalla)return true;
    else return false;
}
void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1 or n==2){
        cout<<"YES"<<endl;
        return;
    }
    bool a1=true,a2=true,a3=true;
    for(int i=0;i<n;i++){
        if(v[i]!=v[n-i-1]){
            a1=false;
            a2=check(v,n,v[i]);
            a3=check(v,n,v[n-i-1]);
            break;
        }

    }
if(a1 or a2 or a3)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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