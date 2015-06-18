//usage ./EEuclid <x> <y>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(a,b) {tmp=a;a=b-q*a;b=tmp;}
long *ee_gcd(long a , long b)//gcd, a(ans[1])+ b(ans[2])
{

 if(a<b)return ee_gcd(b,a);
 long *ans=(long *)malloc(3*(sizeof(long)));
 long s=0,s_=1,t=1,t_=0,r=b,r_=a,q=0,tmp=0;
  while(r!=0)
   {
     q=r_ /r;
     swap(r,r_)
     swap(s,s_)
     swap(t,t_)
     
   }
  ans[0]=r_;ans[1]=s_;ans[2]=t_;
  return ans;   
}
int main(int argc, char *argv[])
{
if(argc ==3)
{
  long a,b;
  a=atol(argv[1]);
  b=atol(argv[2]);
  long *ans=ee_gcd(a,b);
 printf("gcd of (%ld,%ld)=%ld=(%ld)*(%ld)+(%ld)*(%ld)\n",a,b,ans[0],a,ans[1],b,ans[2] );
if(ans[0]==1) printf("inverse of %ld is %ld in (mod %ld)\n",a,ans[1],b);
}
else printf("Wrong Format!\n");

return 0;
}
