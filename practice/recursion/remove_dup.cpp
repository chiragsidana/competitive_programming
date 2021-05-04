#include<bits/stdc++.h>
using namespace std;
string removedup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    cout<<removedup("aaaabbbbccccdddeee")<<endl;
    return 0;
}