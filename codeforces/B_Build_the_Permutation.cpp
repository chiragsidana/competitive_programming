#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n,a,b;cin>>n>>a>>b;
    if(abs(a-b)>1 or (a+b)>n-2){
        cout<<-1<<endl;
        return;
    }
    int st=1,en=n;
    bool fl;
    if(a>b){
        fl=0;
    }
    else{
        fl=1;
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(i==a+b+2){
            if(fl==1){
                for(int j=st;j<=en;j++){
                    v.push_back(j);
                }
            }
            
         else{
                for(int j=en;j>=st;j--){
                    v.push_back(j);
                }
            }
            break;

        }
        if(fl==0){
            v.push_back(st);
            st++;
        }
        else{
            v.push_back(en);
            en--;
        }
        fl=!fl;
    }

 for(int i:v){
     cout<<i<<" ";
 }cout<<endl;

    


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