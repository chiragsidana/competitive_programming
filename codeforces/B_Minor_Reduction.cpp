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
    // int x;
    // cin>>x;
    // int y=x;
    // vi v;

    // while(x!=0){
    //     int temp=x%10;
    //     v.push_back(temp);
    //     x=x/10;
    // }
    //  int n=v.size();
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // reverse(v.begin(),v.end());
   
    // for(int i=0;i<n-1;i++){
    //     if(v[i]+v[i+1]>v[i]){
    //         v[i]=v[i]+v[i+1];
    //         break;
    //     }
    // }
    // int ans=0;
    // for(int i=n-1;i>=0;i--){
    //     ans+=v[i]*pow(10,i-n-1);
    // }
    // cout<<ans<<endl;
    string chirag;
    cin>>chirag;
    int saza=chirag.size();
    int sidana;
    for(int t=saza-1;t>0;t--){
        sidana=chirag[t]-'0'+chirag[t-1]-'0';
        if(sidana>=10){
            int divyanshu1=sidana%10;
            int divyanshu2=sidana/10;
            chirag[t]=(divyanshu1 + '0');
            chirag[t-1]=(divyanshu2 + '0');
            cout<<chirag<<endl;
            return;
        }
    }
    sidana=chirag[0]-'0'+chirag[1]-'0';
    chirag[1]=(sidana+'0');
    cout<<chirag.substr(1,chirag.size()-1)<<endl;

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