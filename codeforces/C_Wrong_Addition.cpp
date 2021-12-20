#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    // int a,s;
    // cin>>a>>s;
    // vector<int> vs,as,ans;
    // while(s!=0){
    //     vs.push_back(s%10);
    //     s=s/10;
    // }
    // while(a!=0){
    //     as.push_back(a%10);
    //     a=a/10;
    // }
    // int x=0;
    // for(int i=0;i<vs.size();i++){
    //     if(x>=vs.size()){
    //         break;
    //     }
        
    //     if(vs[x]!=9){
            
    //         if(vs[x+1]==1){
                
    //             ans.push_back(((vs[x+1]*10)+vs[x])-as[i]);
    //             x+=2;
    //         }
    //         else{
    //             ans.push_back(vs[x]-as[i]);
    //             x++;
    //         }
            
    //     }
    //     else{
    //         ans.push_back(vs[x]-as[i]);
    //         x++;
    //     }
    // }
    
    // reverse(ans.begin(),ans.end());
    // while(*ans.begin()==0){
    //     ans.erase(ans.begin());
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i];
    // }cout<<endl;

    int a,s;
    cin>>a>>s;
    vector<int> va,vs,b;
    while(a>0){
        va.push_back(a%10);
        a=a/10;
    }
    while(s>0){
        vs.push_back(s%10);
        s=s/10;
    }
    int ans=0;
    int n=va.size();
    int m=vs.size();
    int p=0;
    for(int i=0;i<n;i++){
        if(p>=m){
            cout<<-1<<endl;
            return;
        }
        if(va[i]>vs[p]){
            int t=vs[p];
            p++;
            if(p>=m or vs[p]!=1){
                cout<<-1<<endl;
                return;
            }
            t=(vs[p]*10)+t;
            b.push_back(t-va[i]);
        }
        else{
            int t=vs[p];
            b.push_back(t-va[i]);
        }
        p++;
    }
    while(p<m){
        b.push_back(vs[p]);
        p++;
    }
    n=b.size();
    for(int i=n-1;i>=0;i--){
        ans=(ans*10)+b[i];
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