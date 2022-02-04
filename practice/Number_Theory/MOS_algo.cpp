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
int rootN;
struct Q{
int idx,l,r;
};
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN==q2.l/rootN){
        return q1.r>q2.r;
    }
    return q1.l/rootN < q2.l/rootN;
}
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    rootN=sqrtl(n);
    int queries;
    cin>>queries;
    rep(i,0,queries){
        int l,r;
        cin>>l>>r;
    q[i].l=l;
    q[i].r=r;
    q[i].idx=i;
    }
    sort(q,q+queries,compare);
    vi ans(queries);
    int curr_l=0,curr_r=-1,l,r;
    int curr_ans=0;
    rep(i,0,queries){
        l=q[i].l;r=q[i].r;
        l--;r--;
        while(curr_r<r){
            curr_r++;
            curr_ans+=a[curr_r];
        }
        while(curr_l>l){
            curr_l--;
            curr_ans+=a[curr_l];
        }
        while(curr_l<l){
            curr_ans -=a[curr_l];
            curr_l++;
        }
        while(curr_r>r){
            curr_ans-=a[curr_r];
            curr_r--;
        }
        ans[q[i].idx]=curr_ans;
    }
    rep(i,0,queries){
        cout<<ans[i]<<endl;
    }

    return 0;
}