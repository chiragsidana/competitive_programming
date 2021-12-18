#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int w,h;
    cin>>w>>h;
    int n1;
    cin>>n1;
    vector<int> v1(n1);
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
     int n2;
    cin>>n2;
    vector<int> v2(n2);
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }
     int n3;
    cin>>n3;
    vector<int> v3(n3);
    for(int i=0;i<n3;i++){
        cin>>v3[i];
    }
     int n4;
    cin>>n4;
    vector<int> v4(n4);
    for(int i=0;i<n4;i++){
        cin>>v4[i];
    }
    int ans1=(v1[n1-1]-v1[0])*h;
    int ans2=(v2[n2-1]-v2[0])*h;
    int ans3=(v3[n3-1]-v3[0])*w;
    int ans4=(v4[n4-1]-v4[0])*w;
cout<<max(ans1,max(ans2,max(ans3,ans4)))<<endl;
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