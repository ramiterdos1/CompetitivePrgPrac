#include <stdio.h>
#include <stdlib.h>

int minima( int *a,int l, int r)
{
  printf("%d,%d!!\n",l,r);
  if(l>r)return -1;
  else if(l==r-1||l==r)
         {
           printf("EQUALITY\n");
           if((a[l-1]>a[l] && a[l]<=a[l+1])||(a[l-1]>=a[l] && a[l]<a[l+1]) ) 
              return l;
           else return -1;
         }
  else 
       {
         int mid= (l+r)>>1;
         printf("l<r...%d\n",mid);
         if((a[mid-1]>a[mid] && a[mid]<=a[mid+1])|| (a[mid-1]>=a[mid] && a[mid]<a[mid+1])) 
            {printf("HERE mid=%d\n",mid);   return mid;}
	 else if(a[mid-1]<a[mid])
            {printf("l..mid-1\n");return minima(a,l,mid);}
         else if (a[mid]<=a[mid-1]) 
            {printf("mid+1..r\n");return minima(a,mid,r);}
       }
   return 0;
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
f=minima(a,0,len-1);
if(f==-1)
   printf("No Minima found!\n");
else printf("Minima found at %d. %d->%d->%d!!\n",f,a[f-1],a[f],a[f+1]);
return 0;
}
