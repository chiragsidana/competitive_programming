#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

bool characterCheck(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    else 
    return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    string p;
	    cin>>s>>p;
	    int ans = 1e9;
	    
	 for(int i='a' ; i<='z' ; i++)
	 {
	    int count = 0;
	    string ss=s;
	    string pp=p;
	    
	    for(int j=0;j<n;j++)
	    {
	        if(ss[j] == '?')
	        {
	            ss[j]=i;
	        }
	        if(pp[j] == '?')
	        {
	            pp[j] = i;
	        }
	     }
	  for(int j=0;j<n;j++)
	   {
	     if(ss[j]==pp[j])
	      {
	        continue;
	      }
	      else if(characterCheck(ss[j])!=characterCheck(pp[j]))
	       {
	          count = count +1;
	       }
	        else count = count+2;
	    }
	     ans = min(ans , count);
	      
	 }
	 
	 cout<<ans<<endl;
	 
	}
	    
	return 0;
}
