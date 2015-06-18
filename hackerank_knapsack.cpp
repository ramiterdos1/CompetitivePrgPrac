#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define f1(a,b) for(int i=a;i<=b;i++)
#define f2(a,b) for(int i=a;i<b;i++)
#define pchk cout<<"hula\n"
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    while(T--)
        {
        int n,k;cin>>n>>k;
        int arr[k+5],list[n+1];
        f1(1,k)arr[i]=0;arr[0]=1;
        f1(1,n){cin>>list[i];if(list[i]<=k)arr[list[i]]=1;}
        f1(1,k)
            {
            if(arr[i]!=1)
                {
                int j=i;
                f1(1,n)if(j>list[i])if(arr[j-list[i]]&&arr[list[i]]==1)arr[j]=1;
            }
        }
        f1(0,k)if(arr[k-i]==1){cout<<(k-i)<<'\n';break;}
        
    }
    return 0;
}
