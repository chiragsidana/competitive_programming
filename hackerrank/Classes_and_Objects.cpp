#include<bits/stdc++.h>
using namespace std;
class student{
public:
int marks[5];
void input(){
for(int i=0;i<5;i++){
cin>>marks[i];
}
}
int totalscore(){
    int total=0;
    for(int i=0;i<5;i++){
        total+=marks[i];
    }
    return total;
}

};