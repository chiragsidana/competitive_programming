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
// const int N=1e3+2;
// vi v[N];
// void solve()
// {
//     int n;
//     cin>>n;
//     map<pair<int,int>,int>edges;
//     vi degree(n+1);
//     rep(i,0,n+1){
//         v[i].clear();
//     }
//     rep(i,0,n-1){
//         int a,b;
//         cin>>a>>b;
//         pair<int,int> e={a,b};
//         edges[e]=i;
//         swap(e.ff,e.ss);
//         edges[e]=i;
//         degree[a]++;
//         degree[b]++;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     for(auto x:degree){
//         if(x>2){
//             cout<<-1<<endl;
//             return;
//         }
//     }
//     int start;
//     for(int i=1;i<=n;i++){
//         if(degree[i]==1){
//             start=i;
//             break;
//         }
//     }
//     int w=2;
//     queue<int> q;
//     vi vis(n+1);
//     vis[start]=1;
//     q.push(start);
//     vi ans(n-1);
//     while(!q.empty()){
//         int curr=q.front();
//         q.pop();
//         for(auto x:v[curr]){
//             if(!vis[x]){
//                 vis[x]=1;
//                 q.push(x);

//                 pair<int,int> e={curr,x};
//                 int idx=edges[e];
//                 ans[idx]=w;
//                 // w=(w==2)?5:2;
//                 if(w == 2)
// 					w = 5;
// 				else
// 					w = 2;
//             }
//         }
//     }
// for(auto x:ans){
//     cout<<x<<" ";

// }cout<<endl;
// }
const int M = 3e5 + 5;
vector<int>v[M];
 
void solve()
{
	int n;
	cin >> n;
 
	map<pair<int,int> , int>edges;
 
	vector<int>degree(n + 1);
 
	for(int i = 0 ; i <= n ; i++)
		v[i].clear();
 
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int a , b;
		cin >> a >> b;
 
		pair<int,int>e = {a , b};
		edges[e] = i;
		swap(e.first , e.second);
		edges[e] = i;
 
		degree[a]++;
		degree[b]++;
 
		v[a].push_back(b);
		v[b].push_back(a);
	}
 
	for(auto x : degree)
		if(x > 2)
		{
			cout << -1 << endl;
			return;
		}
 
	int start;
 
	for(int i = 1 ; i <= n ; i++)
		if(degree[i] == 1)
		{
			start = i;
			break;
		}
 
	int w = 2;
 
	queue<int>Q;
	vector<int>vis(n + 1);
	vis[start] = 1;
	Q.push(start);
 
	vector<int>ans(n - 1);
 
	while(!Q.empty())
	{
		int curr = Q.front();
		Q.pop();
 
		for(auto x : v[curr])
		{
			if(!vis[x])
			{
				vis[x] = 1;
				Q.push(x);
 
				pair<int,int>e = {curr , x};
				int idx = edges[e];
				ans[idx] = w;
 
				if(w == 2)
					w = 5;
				else
					w = 2;
			}
		}
	}
 
	for(auto x : ans)
		cout << x << ' ' ;
	cout << endl;
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