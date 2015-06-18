#include <iostream>
#include <cstdlib>

using namespace std;
int sieve[1000000];
void pr_sieve()
{
for(int i=0;i<1000000;i++){sieve[i]=0;if(i%2==0)sieve[i]=1;if(i%3==0)sieve[i]=1;}
sieve[0]=sieve[1]=1;
sieve[2]=0;//0->represent primes
sieve[3]=0;
for(int k=5;k<1000000;k+=2)
   {
     if(sieve[k]==0)
       {
              for(int i=2;i<=1000000/k;i++)sieve[k*i]=1;
       }
    }
//for(int i=2;i<1000000;i++)if(sieve[i]==0)cout<<i<<' ';
}

int main()
{
int n;
cin>>n;
pr_sieve();
for(int i=n-4;i>3;i--)
    {
       if(sieve[i]==1&&sieve[n-i]==1){cout<<i<<' '<<(n-i)<<'\n';break;}
    }
return 0;
}
