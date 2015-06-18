#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <stack>
using namespace std;

#define f(a,b) for(int i=a;i<=b;i++)
#define l(b)  for(int i=0;i<b;i++)


int main()
{
  int t; cin>>t;getchar();
  while(t--)
  {
    stack<char> s;
    int i =0,count=0,flg=1;
    char c=0;
    while((c=getchar())!='\n') 
      {
       if(flg)
        {  
           i++;
          // cout<<i<<"."<<s.empty()<<endl;
   	   if(c=='<')s.push(c);
           else if(c=='>'&& !s.empty()){s.pop();if(s.empty())count=i;}
           else if(c=='>' && s.empty())flg=0;
           //i++;
             
 	}
      }
     cout<<count<<endl;
  }
return 0;
}

