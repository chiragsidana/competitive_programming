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
    int n,l;cin>>n>>l;
    int arr[n][l];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        for(int j=0;j<l;j++){
           
            arr[i][l-1-j]=temp%2;
            temp=temp/2;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<l;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int ar[n];
    int count0=0,count1=0;
    for(int j=0;j<l;j++){
        for(int i=0;i<n;i++){
            if(arr[i][j]==1){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count1>count0){
            ar[j]=1;
        }
        else{
            ar[j]=0;
        }
        count0=0;
        count1=0;
    }
    
    // for(int i=0;i<l;i++){
    //     cout<<ar[i]<<" ";
    // }
    int mul=1;
    int ans=0;
    for(int i=l-1;i>=0;i--){
        ans+=ar[i]*mul;
        mul=mul*2;
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