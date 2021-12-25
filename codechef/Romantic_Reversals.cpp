#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  string temp="";
  for(int i=0;i<k;i++){
      temp+=s[i];
  }  
  string a2="";
    for(int i=k;i<n;i++){
        a2+=s[i];
    }
    string a1="";
    int p1=0;
    int p2=temp.size()-1;
    int size=temp.size();
    for(int i=0;i<size/2;i++){
        a1+=temp[p1];
        a1+=temp[p2];
        p1++;
        p2--;
    }
    if(size%2!=0){
        a1+=temp[size/2];
    }
    reverse(a1.begin(),a1.end());
    cout<<a1+a2<<endl;

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