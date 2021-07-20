#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<s1.length()<<" "<<s2.length()<<endl;
    string s3=s1+s2;
    cout<<s3<<endl;
    string s4=s1;
    s4.erase(0,1);
    string s5=s2;
    s5.erase(0,1);
    cout<<s2[0]+s4<<" "<<s1[0]+s5;

    return 0;
}