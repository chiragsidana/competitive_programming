#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int t=INT_MAX;
    deque<int> d;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp<t){
            d.push_front(temp);
            t=temp;
        }
        else{
            d.push_back(temp);
        }
    }
      for (auto it = d.begin(); it != d.end(); ++it)
        cout<<*it<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}