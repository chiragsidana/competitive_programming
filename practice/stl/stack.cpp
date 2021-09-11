#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

   
  cout<<"top_element-> "<<s.top()<<endl;
    s.pop();
    cout<<"top_element-> "<<s.top()<<endl;
    cout<<"size_of_stack-> "<<s.size()<<endl;
    cout<<"empty_or_not-> "<<s.empty()<<endl;
 return 0;
}