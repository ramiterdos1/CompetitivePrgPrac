#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,max=0,s=0;
		cin>>n>>m;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>max)max=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			s+=max-a[i];
		}
		/*if(m==0&&s==0)cout<<"Yes\n";
		else if(m>0)
			{*/	if(m>=s && (m-s)%n==0)cout<<"Yes\n";
			    else cout<<"No\n";
				/*}
			else cout<<"No\n";*/
	}
	return 0;
}