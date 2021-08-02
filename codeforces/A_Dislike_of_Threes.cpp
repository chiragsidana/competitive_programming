#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int count = 0;
        for(int i=1;count<1000;i++){
            if((i%3!=0)&&(i%10!=3)){
                count++;
                v.push_back(i);
            }
        }
        cout<<v[n-1]<<endl;
    }
    return 0;
}