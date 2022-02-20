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
#define vvi vector<vector<int>>
#define vpi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
using namespace std;
const int N=1e3+2;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   
    for(int i=a;i<=b;i++){
         bool count=false;
        for(int j=c;j<=d;j++){
            int sum=i+j;
            if(isPrime(sum)==true){
                count=true;
            }
        }
        if(count==false){
            cout<<"Takahashi"<<endl;
            return;
        }
    }
    cout<<"Aoki"<<endl;
}
signed main()
{
    solve();
    return 0;
}