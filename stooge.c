#include <stdio.h>
#include <stdlib.h>
int c=0;
void stooge(int *a,int i, int j)
{

  printf("%d.%d..%d\n",c++,i,j); 
  if(a[i]>a[j])
    {
      a[i]+=a[j];
      a[j]=a[i]-a[j];
      a[i]-=a[j];
    }
  if(i+1>=j) return;
  int k= (j-i+1)/3;
  stooge(a,i,j-k);
  stooge(a,i+k,j);
//  stooge(a,i,j-k); 

}

int main()
{
int i,len,f;
scanf("%d",&len);
int *a=(int *)calloc(sizeof(int),len);
for(i=0;i<len;i++)
   {
     scanf("%d",(a+i));
   }
stooge(a,0,len-1);
for(i=0;i<len;i++)printf("%d ",a[i]);
printf("\n");
return 0;
}

