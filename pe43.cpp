#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
int d[]={0,1,2,3,4,5,6,7,8,9};
long sum=0,num=0;
do{
  if(d[0]!=0)
   {
     if((d[1]*100+d[2]*10+d[3])%2==0)
      {
     if((d[2]*100+d[3]*10+d[4])%3==0)
     {if((d[3]*100+d[4]*10+d[5])%5==0)
     {if((d[4]*100+d[5]*10+d[6])%7==0)
     {if((d[5]*100+d[6]*10+d[7])%11==0)
     {if((d[6]*100+d[7]*10+d[8])%13==0)
           {
     if((d[7]*100+d[8]*10+d[9])%17==0)
         {
          for( int i=0;i<10;i++)
             {
               num=num*10+d[i];
		}
          cout<<num<<endl;
          sum+=num;num=0;
	   }
    }}}}}}
   }
  }while(next_permutation(d,d+10));
cout<<"sum="<<sum<<endl;
return 0;
}
