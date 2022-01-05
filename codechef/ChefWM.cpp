#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
using namespace std;
int pfactors(int n){
    set<int> primecount;
    while(n%2==0){
        primecount.insert(2);
        n=n/2;
    }
    for(int i=3;i<sqrt(n);i=i+2){
        while(n%i==0){
            primecount.insert(i);
            n=n/i;
        }
    }
    if(n>2){
        primecount.insert(n);
        
    }
    return primecount.size();
}
int fm(int n,int k){
    int chirag;
    int m=1;
    rep(i,1,k+1){
        if(n%i==0){
            m=max(m,i);
        }
    }
    chirag=n/m;
    return chirag;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    int pf=pfactors(m);
    if(pf==0){
        cout<<"0"<<endl;
        return;
    }
    int chirag=fm(n,pf);
    cout<<n/chirag<<endl;
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