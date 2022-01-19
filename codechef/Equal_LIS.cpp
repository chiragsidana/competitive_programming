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
    // int n;cin>>n;
    // vi chirag;
    // // if(n==2){
    // //     cout<<"NO"<<endl;
    // //     return;
    // // }
    // if(n%2){
    //     cout<<"YES"<<endl;
    //     for(int i=1;i<=(n/2);i++){
    //         cout<<i<<" ";
    //     }cout<<n<<" ";
    //     for(int i=n-1;i>(n/2);i--){
    //         cout<<i<<" ";
    //     }cout<<endl;
    // }
    // else if (n!=2){
    //     cout<<"YES"<<endl;
    //     cout<<(n/2)<<" ";
    //     for(int i=1;i<(n/2);i++){
    //         cout<<i<<" ";
    //     }
    //     for(int i=n;i>(n/2);i--){
    //         cout<<i<<" ";
    //     }cout<<endl;
    // }
    // else cout<<"NO"<<endl;
    int n;
    cin>>n;
    if(n>2)
    {
        cout<<"YES"<<endl;
        if(n%2!=0)
        {
           
            rep(i, 0, n)
            {
                cout << i + 1 <<" ";
                i++;
            }
            for (int i = n - 1; i > 0; i -= 2)
            {
                cout << i <<" ";
            }
            cout <<endl;
        }
        else
        {
            
            list<int> chirag{2,1,4,3};
            rep(i,4,n)
            {
                if(i%2==0)
                {
                    chirag.push_front(i+1);
                }
                else
                {
                    chirag.push_back(i+1);
                }
            }
            for(auto y:chirag)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
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