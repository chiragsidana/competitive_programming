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
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vii a(n);
        rep(i,0,n){
            cin>>a[i].ff>>a[i].ss;
        }
        int l,p;cin>>l>>p;
        rep(i,0,n){
            a[i].ff=l-a[i].ff;
        }
        sort(a.begin(),a.end());
        int ans=0;
        int curr=p;
        bool flag=0;
        priority_queue<int,vector<int>> pq;
        rep(i,0,n){
            if(curr>=l)
            break;
            while(curr<a[i].ff){
                if(pq.empty()){
                    flag=1;
                    break;
                }
                ans++;
                curr+=pq.top();
                pq.pop();
            }
            if(flag)
            break;
            pq.push(a[i].ss);
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        while(!pq.empty() and curr<l){
            curr+=pq.top();
            ans++;
        }

        if(curr<l){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}