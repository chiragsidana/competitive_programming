#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<"Size before pop-> "<<q.size()<<endl;
    cout<<"First_element-> "<<q.front()<<endl;
    q.pop();
    cout<<"First_element-> "<<q.front()<<endl;
    cout<<"Size after pop-> "<<q.size()<<endl;

    return 0;
}