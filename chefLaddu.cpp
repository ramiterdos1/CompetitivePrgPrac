#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
 
using namespace std;

int main()
{
int t;//cout<<"hello\n";
for(cin>>t;t;t--)
  {
    int n,m=0,sum=0;
    cin>>n;int a[n];
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    //cout<<"a accepted!\n";
    for(int i=n-1,j=n-1;i>=0&&j>=0;)
    {
       
          // cout<<"i="<<i<<','<<"j="<<j<<endl;
       while(a[j]>=0){j--;
           //cout<<"i="<<i<<','<<"j="<<j<<endl;
          }
       while(a[i]<0){i--;
           //cout<<"i="<<i<<','<<"j="<<j<<endl;
          }
       if(a[i]>=0 && a[j]<0)
         {
          // cout<<"i="<<i<<','<<"j="<<j<<endl;
           if(abs(a[j])>a[i])
             {
	       sum+=abs(j-i)*(a[i]);
               a[j]+=a[i];
               a[i]=0;
               i--;
             }
          else if(abs(a[j])<a[i])
            {
              sum+=abs(j-i)*abs(a[j]);
              a[i]+=a[j];
              a[j]=0;
              j--;
            }
         else {
                sum+=abs(j-i)*a[i];
                i--;j--;
              }
       //  cout<<sum<<endl;
         }
    }
   cout<<abs(sum)<<endl;
  }
return 0;
}
