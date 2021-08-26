#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        if((i%2)==0){
        for(int j=0;j<5;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    else{
        for(int j=4;j>=0;j--){
            cout<<count+j<<" ";
            
        }
        count+=5;
        cout<<endl;
    }
    // vector <vector <int> > v;
    // for(int i=0;i<n;i++){
    //     vector<int> temp;
    //     for(int j=0;j<n;j++){
    //         int t2;
    //         cin>>t2;
    //         temp.push_back(t2);
    //     }
    //     v.push_back(temp);
    // }

}
}
int main(){
    solve();
    return 0;
}