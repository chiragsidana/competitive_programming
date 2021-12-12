#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> negative,positive;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>0){
            positive.push_back(temp);
        }
        else{
            negative.push_back(abs(temp));
        }
    }
    sort(positive.begin(),positive.end());
    sort(negative.begin(),negative.end());
    reverse(positive.begin(),positive.end());
    reverse(negative.begin(),negative.end());
    int ans=0;
    int negmin=0,posmax=0;
    if(negative.size()>0){
        negmin=negative[0];
    }
    if(positive.size()>0){
        posmax=positive[0];
    }
    ans=ans-max(negmin,posmax);
    for(int i=0;i<positive.size();i+=k){
        ans=ans+(2*positive[i]);
    }
    for(int i=0;i<negative.size();i+=k){
        ans=ans+(2*negative[i]);
    }
    cout<<ans<<endl;
    
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