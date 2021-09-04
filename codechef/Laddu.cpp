#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;string x;
	    cin>>n>>x;
	    int sum=0;
	    while(n--){
	        string s;cin>>s;
	        if(s=="CONTEST_WON"){
	            int a;cin>>a;
	            if(a<20)
	            sum+=(300+(20-a));
	            else
	            sum+=300;
	        }
	        else if(s=="TOP_CONTRIBUTOR")
	        sum+=300;
	        else if(s=="BUG_FOUND"){
	            int b;cin>>b;
	            sum+=b;
	        }
	        else
	        sum+=50;
	    }
	    int k;
	    if(x=="INDIAN")
	       k=sum/200;
	    else
	       k=sum/400;
	   cout<<k<<endl;
	}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}