
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
bool sortorder(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
bool sortOrder(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back({temp,i+1});
    }
    sort(v.begin(),v.end(),sortorder);
    // reverse(v.begin(),v.end());
    vector<pair<int,int>> ans;
    ans.push_back({0,0});
    int pos=1;
    int neg=-1;
    int val=0;
    for(int i=0;i<n;i++){
         ans.push_back({pos,v[i].second});
        val+=((2*abs(0-pos)))*v[i].first;
        i++;
        pos++;
    }
    for(int i=1;i<n;i++){
         ans.push_back({neg,v[i].second});
        val+=((2*abs(0-neg)))*v[i].first;
        i++;
        neg--;
    }
    cout<<val<<endl;

    sort(ans.begin(), ans.end(), sortOrder);
    reverse(ans.begin(),ans.end());
    
    for(int i=0;i<n+1;i++){
        cout<<ans[i].first<<" ";
    }
    cout<<endl;
    return;

}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}