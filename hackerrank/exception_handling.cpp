#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,den;
    cin>>num>>den;
    int result;
    try{
     if(den==0)
        throw den;
        result=num/den; //division happens here
    }
    catch(int ex){
        cout<<"divide by 0 not allowed "<<ex<<" ";
    }
    
    cout<<result;
    return 0;
}