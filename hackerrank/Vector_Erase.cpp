#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    //galat commit
    int x;
    cin>>x;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
