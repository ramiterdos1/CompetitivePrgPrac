#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
int t,count=0;
scanf("%d\n",&t);//getchar();
//printf("%d\n",t);
  char *c=(char*)calloc(100000,sizeof(char));
while(t--)
{
  long s=0,x=0;int i=0;//printf("NOtrouble1\n");
  for(;i<100000;i++)c[i]=0;
  //printf("NOtr2\n"); 
  for(i=0;(c[i]=getchar())!='\n';i++) ;         //printf("NOtr3\n"); 
  for(i=0 ;c[i]!='\n';i++)s+=(int)(c[i]-'A'+1);
 // printf("NOtr4\n"); 
  s<<=1;
  x=floor(sqrt(s));
  //if(count<10)printf("sum(%s)=%ld...%ld\n",c,s/2,x*(x+1));
  if(s==x*(x+1))
   {printf("FOUND1---%s",c);count++;} 
}
printf("\n\ncount==%d\n",count);
return 0;
}

