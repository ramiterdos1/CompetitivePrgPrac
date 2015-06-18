#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
static int a[209],cost[209],imax=numeric_limits<int>::max(),path[209],limit=200;


void p()
{
  int p=2;
  for(int i=1;p<=200;i++){a[p]=i;p*=2;}
  for(int i=0;i<=limit;i++)cost[i]=imax;
}
void fill()
{
  a[1]=0;
  for(int i=2;i<=200;i++)
    {
      if(a[i]==0)
        {
         int x=i-(i/2);
         if(i==(x<<1))a[i]=a[x]+1;
         else {
                if(a[x]<=a[i/2])a[i]=a[x]+2;
                else a[i]=a[i/2]+2;
              }  
        }
      
    }
}

 void Backtrack(int power, int depth) {
            if (power > limit || depth > cost[power]) return;
            cost[power] = depth;
            path[depth] = power;
            for (int i = depth; i >= 0; i--)
                Backtrack(power + path[i], depth + 1);
        }
int main()
{
p();
fill();
Backtrack(1,0);
int sum=0,i;
for(i=2;i<=200;i++)
    {sum+=a[i];cout<<i<<"-"<<a[i]<<"---"<<cost[i];
      if(a[i]==cost[i])cout<<'\n';
      else cout<<"ghapla---\n";
     }
cout<<sum<<'\n';
   
return 0;
}
