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
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int hcf1=v[0],hcf2=v[1];
    for(int i=0;i<n;i++){
        if(i%2==0){
            hcf1=__gcd(hcf1,v[i]);
        }
        else{
            hcf2=__gcd(hcf2,v[i]);
        }
    }
    int xyz=2;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[i]% hcf2==0){
                xyz=1;
                break;
            }
        }
    }
    if(xyz==2){
        cout<<hcf2<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(i%2!=0){
            if(v[i]% hcf1==0){
                xyz=0;
                break;
            }
        }
    }
    if(xyz==1){
        cout<<hcf1<<endl;
        
    }
    if(xyz==0){
        cout<<0<<endl;
    }
//     if(n==2){
//         cout<<max(v[0],v[1])<<endl;
//         return;
//     }
//     int hcf1,hcf2;
//     if(n==3){
//     hcf1=gcd(v[0],v[2]);
//      hcf2=v[1];
     
//     if(hcf1==hcf2){
//         cout<<"0"<<endl;
//         return;
//     }
//     }
//     else{
// for(int i=0;i<n-3;i+=2){
//      hcf1=gcd(v[i],v[i+2]);
//      hcf2=gcd(v[i+1],v[i+3]);
     
//     if(hcf1==hcf2){
//         cout<<"0"<<endl;
//         return;
//     }
   
// }
//  }
//  cout<<max(hcf1,hcf2)<<endl;
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