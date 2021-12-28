#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;



class bata{
    public:
    int start;
    int end;
    int ans;
};
bool so1(bata a, bata b) {
    if (a.start == b.start)
        return a.end - a.start > b.end - b.start;
    return a.start < b.start;
}
bool so2(bata a, bata b) {
    if (a.end == b.end)
        return a.end - a.start > b.end - b.start;
    return a.end < b.end;
}
void solve()
{
    int n;cin>>n;
    vector<bata> v1,v2;
    int left,right;
    while(n--){
        cin>>left>>right;
        bata xd;
        xd.start=left;
        xd.end=right;
        xd.ans=left;
        v1.push_back(xd);
        v2.push_back(xd);

    }
    sort(v1.begin(),v1.end(),so1);
    sort(v2.begin(),v2.end(),so2);
   int x=v1.size();
    for(int i=0;i<x;i++){
        if (i <= x - 2 and v1[i].start == v1[i + 1].start)
            v1[i].ans = v1[i + 1].end + 1;
        else if (i <= x - 2 and v1[i].end == v1[i + 1].end)
            v1[i].ans = v1[i + 1].start - 1;
    }
    for(int i=0;i<x;i++){
         if (i <= x - 2 and v2[i].start == v2[i + 1].start)
            v2[i].ans = v2[i + 1].end + 1;
        else if (i <= x - 2 and v2[i].end == v2[i + 1].end)
            v2[i].ans = v2[i + 1].start - 1;
    }
    for(int i=0;i<x;i++){
        cout << v1[i].start <<" "<< v1[i].end << " " << v1[i].ans<<endl ;
    }
    cout<<endl;

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