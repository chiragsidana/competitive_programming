#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    double s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s1++;
        }
         else if(arr[i]<0){
        s2++;
         }
         else{
        s3++;
          }
    

    }
    s1=s1/n;
    s2=s2/n;
    s3=s3/n;
      cout<<setprecision(6)<<s1<<endl;
        cout<<setprecision(6)<<s2<<endl;
        cout<<setprecision(6)<<s3<<endl;
    return 0;
}
