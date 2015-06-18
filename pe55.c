//Lychrel numbers with an assumption
#include<stdio.h>
#include<stdlib.h>

long rev(long n)
{
 long r_n=0;
 while(n>0)
   {
     r_n=r_n*10+(n%10);
     n/=10;
   }
  return r_n;
}

int main()
{
  printf("Hello reverse of 456 is %ld\n",rev(456));
 long i=0,c_l=0;
 while(++i<=10000)
  {
    long n=i,r=0,r_c=1,_n=i;
    r=rev(n);
    while(rev(r+_n)!=(r+_n) && r_c<55)
    {
     r_c++;
     _n+=r;
     r=rev(_n);
    }
    if(r_c<50)printf("%ld--->%ld\n",i,r_c);
    else {c_l++;printf("%ld--->[LYCHREL]\n",i);}
  }
printf("These many --- %ld\n",c_l);
 
return 0;
}
