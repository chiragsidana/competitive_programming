#include <bits/stdc++.h>
#define int long long 
using namespace std;
main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		int s=0;
		for(int i=1; i<=n; i++)
			cin>>a[i],s+=a[i];
		bool f=0;
		for(int i=2; i*i<=s; i++)
			if(s%i==0)
			{
				f=1;
				break;
			}
		cout<<n+f-1<<endl;
		for(int i=1; i<=n; i++)
		{
			if((a[i]%2) && (!f))
				f=1;
			else
				cout<<i<<" ";
		}
		cout<<endl;
	}
}
 