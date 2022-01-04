#include <bits/stdc++.h>
//#define int long long
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
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int>> minheap;
    rep(i,0,n){
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1){
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();

        ans+=e1+e2;
        minheap.push(e1+e2);
    }
    cout<<ans;
    return 0;
}