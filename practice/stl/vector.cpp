#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity->"<<v.capacity()<<endl;
    vector<int> a(5,1); 
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" "<<endl;
    }
    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element at 2nd Index  "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){ 
        cout<<i<<" "<<endl;
    }
    // size=kitne element iske andar hain 
    // capacity=kitne ki memory assign ho chuki hai 
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

    return 0;
}