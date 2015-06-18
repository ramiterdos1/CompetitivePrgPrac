#include <stdio.h>
#include <stdlib.h>

int main()
{
int t;
scanf("%d",&t);
int f[1001],i=0;
for(;i<1001;i++)f[i]=(i*i+i+2)>>1;

while(t--)
{
int n;
scanf("%d",&n);
int j=0;
for(;f[j]<n;j++);

printf("%d\n",j);
}
return 0;
}
