#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
int d[]={1,2,3,4,5,6,7,8,9},i=0;

do{
//cout<<(++i)<<endl;
int z=d[0]+d[1]+d[2];
if(d[0]+d[1]+d[2]==d[3]+d[4]+d[5]&&z==d[6]+d[7]+d[8]&&z==d[0]+d[4]+d[8]&&z==d[2]+d[4]+d[6]&&z==d[0]+d[3]+d[6]&&z==d[1]+d[4]+d[7]&&z==d[2]+d[5]+d[8]) 
{
   for(int i=0;i<9;i++)
    { 
     cout<<d[i];
     if(i==2 || i==5 || i==8) cout<<'\n';
     else cout<<' ';
    }for(int i=0;i<20;i++)cout<<'-';
cout<<endl<<endl;
}
}while(next_permutation(d,d+9));

return 0;
}
