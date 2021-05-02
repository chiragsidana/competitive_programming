#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code)); //tostring used for converting int to string bcz code is interger

}
int main(){
    subseq("AB","");
    return 0;
}