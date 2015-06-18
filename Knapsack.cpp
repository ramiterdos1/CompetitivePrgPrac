#include <cstdio>
#include <iostream>
#include <algorithm>
#include<string>
#include<vector>
#include<bitset>
#include <ctime>
#include <cstdlib>
using namespace std;
#define f(a,b) for(int i=(a);i<=(b);i++)

int Knapsack(int x[],int len,int val)
{
   int ans[val+5];
   f(0,val+5)ans[i]=-1;
   for(int i=1;i<=len;i++)ans[x[i]]=1;
  /*
   f(1,x[len])
     for(int j=1;j<len;j++)
       {
          int min=val+1;
          if(i>x[j])
        if(ans[j]>=1 && x[i]+j<x[len] && ans[x[i]+j]==-1)
           ans[x[i]+j]=ans[x[i]]+ans[j];
       }
*/
    f(1,val+1)
      {
       if(ans[i]==-1){  
        int min=val+1,j=i;
        f(1,len)
           {
             if(j>x[i])if(ans[j-x[i]]>0 && ans[j-x[i]]<min)min=ans[j-x[i]];
             
           }
         ans[i]=min==val+1?-1:min+1;
        }
      }
   f(0,val+1)cout<<i<<'.'<<ans[i]<<"\n"; 
   return ans[val];
}

int main()
{
time_t beg,end;
time(&beg);
srand(time(0));
int randomval=rand()%5,n,Val;
cout<<"Number of entries :";
cin>>n;
int num[n+3];
cout<<"\nEnter the items\n";
for(int i=1;i<=n;i++)cin>>num[i];
cout<<"\nEnter the maximum value\n";
cin>>Val;
cout<<Knapsack(num,n,Val)<<'\n';
time(&end);
cout<<beg<<' '<<randomval<<' '<<end<<' '<<difftime(end,beg)<<'\n';

return 0;
}
