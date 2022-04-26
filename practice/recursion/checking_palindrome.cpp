#include <bits/stdc++.h>
//#define int long long
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
bool f(int i,string &s){
   int n=s.size();
    if(i>=n/2) return true;
   if(s[i]!=s[n-i-1]){
       return false;
   }
   return f(i+1,s);

}
int main()
{
    string s;
    cin>>s;
    cout<<f(0,s);
    
    return 0;
}