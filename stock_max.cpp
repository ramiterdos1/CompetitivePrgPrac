#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int t;
  int a[50005],c_sum[50005];
  for(cin>>t;t;t--)
    {
      int n;cin>>n;
      for(int i=0;i<n;i++){cin>>a[i];
              if(i==0)
                  c_sum[i]=a[i];
              else c_sum[i]=c_sum[i-1]+a[i];
            }
      //for(int i=0;i<n;i++)cout<<a[i]<<','<<c_sum[i]<<' ';cout<<endl; 
      int p[n][n];
      for(int i=0;i<n;i++)p[0][i]=0;//base case
      for(int i=1;i<=n-1;i++)
	for(int j=i;j<n;j++)
	  {
            int x,z;
            if(j==i)x=0;else x=c_sum[j-i-1];
            z=i*a[j]-c_sum[j-1]+x;
	    
	    if(p[i-1][j]<=z)p[i][j]=z;
	    else p[i][j]=p[i-1][j];
	    cout<<"x="<<x<<",z="<<z<<" p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;	 
 }
      for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	    if(j<i)printf("%6c",' ');else printf("%5d ",p[i][j]);cout<<endl;}
      cout<<p[n-1][n-1]<<endl;	      
    }
  return 0;
}
