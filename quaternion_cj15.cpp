#include <cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<iterator>
using namespace std;

class Quaternion
{
  // -,i,j,k.... //1 or -1
  public:
  char c;int f;
  /*Quaternion(char x)
   {
     c=x;
     f=1;
   }  */
   Quaternion(char x,int f1)
   {
     c=x;f=f1;
   } 
   Quaternion mult(Quaternion);
};
      
      Quaternion q0('-',1);
      Quaternion q1('i',1);
      Quaternion q2('j',1);
      Quaternion q3('k',1);
      Quaternion q4('-',-1);
      Quaternion q5('i',-1);
      Quaternion q6('j',-1);
      Quaternion q7('k',-1);
      Quaternion Q_table[4][4]={{q0,q1,q2,q3},{q1,q4,q3,q6},{q2,q7,q4,q1},{q3,q2,q5,q4}};
   Quaternion Quaternion::mult(Quaternion h)
   {
      int f,i=0,j=0;
      switch(this->c)
       {
         case 'i':i=1;break;
         case 'j':i=2;break;
         case 'k':i=3;break;
       };  
      switch(h.c)
       {
         case 'i':j=1;break;
         case 'j':j=2;break;
         case 'k':j=3;break;
       };  
      Quaternion ans('-',1),a('-',1);
      a=Q_table[i][j];
      ans.c=a.c;ans.f=(a.f)*(this->f)*(h.f);
      return ans;
   }


int main()
{
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
   int L,f=0;long long X;
   cin>>L>>X;
   char x; cin>>x;
   Quaternion ans(x,1);
    for(int j=1;j<L;j++)
        {
           cin>>x;
           Quaternion chk(x,1);
           ans=ans.mult(chk);
        }
     //cout<<ans.c<<"~"<<ans.f<<endl; 
     if(ans.f==1)
      {  
         if(ans.c!='-')
           if(((X>>1)&1)==1)f=1;
      }
    else 
      {
         if(ans.c=='-')f=1;
         else if(((X>>1)&1)==1)f=1; 
      }
   //cout<<"f="<<f<<endl;
   cout<<"Case #"<<i<<": "<<(f==1?"YES\n":"NO\n");
}
return 0;
}
