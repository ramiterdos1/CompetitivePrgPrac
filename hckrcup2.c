#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int KS(int a[],int len,int W)
 {
   int i=0;
   qsort(a,len,sizeof(int),cmpfinc);
     
   return i;
  }
int pro[25],fat[25],carb[25];
int main()
{
int T,k;
scanf("%d",&T);
for(k=1;k<=T;k++)
  {
//
    printf("Case #%d: yes\n",k);
    printf("Case #%d: no\n",k);
//
    int Gp,Gc,Gf,N,i;
    scanf("%d %d %d\n%d",&Gp,&Gc,&Gf,&N);
    for(i=1;i<=N;i++)scanf("%d %d %d",&pro[i],&carb[i],&fat[i]);
    
     

  } 

return 0;
}
