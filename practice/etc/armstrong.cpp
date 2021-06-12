#include<iostream>
using namespace std;

int main() {
       #ifndef ONLINE_JUDGE
           freopen("input.txt", "r", stdin);
           freopen("output.txt", "w", stdout);
       #endif
        int n,sum;
        cin>>n;
        sum=0;
        int shin=n;
        while(n>0){
            int lastdigit=n%10;
            sum=sum+(lastdigit*lastdigit*lastdigit);
            n=n/10;
        }
        if(sum==shin){
            cout<<"armstrong";
        }
        else{
            cout<<"arsmstrong nhi hai";
        }
        


    return 0;
}