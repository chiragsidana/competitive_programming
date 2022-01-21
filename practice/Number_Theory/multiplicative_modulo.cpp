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
using namespace std;
const int N=1e3+2;
struct triplet{
    int x,y,gcd;
};
triplet extendedEuclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }
    triplet smallans=extendedEuclid(b,a%b);
    triplet ans;
    ans.x=smallans.y;
    ans.gcd=smallans.gcd;
    ans.y=smallans.x-(a/b)*smallans.y;
    return ans;

}
int mmi(int a,int m){
    triplet temp=extendedEuclid(a,m);
    return temp.x;
}
int main()
{
    int a,m;
    cin>>a>>m;
    cout<<mmi(a,m)<<endl;
    return 0;
}