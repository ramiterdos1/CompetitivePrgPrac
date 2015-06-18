#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
struct tuple2
{
  int x,pos;
};
bool cmp(tuple2 a,tuple2 b)
{
  if(a.x!=b.x) 
    return a.x<b.x;
  else return a.pos<b.pos;
}
int partition(vector<int> &v,int max)
{
	int d=v.size(),parts1[d],parts2[d],p1=1,p2=1,i=0,c=0,f=0;
    for(i=0;i<d;i++)parts1[i]=parts2[i]=0;
	//for left to right arrangement
    for( i=0;i<d-1;i++)
      {
        parts1[i]=p1;    
        c+=v[i];
        if(c+v[i+1]>max){p1++;c=0;}
        cout<<parts1[i]<<" ";
      }
      parts1[d-1]=p1;
      cout<<'\n';
    
	  //for right to left
	  c=0;
	  for( i=d-1;i>0;i--)
        {
          parts2[i]=p2;    
          c+=v[i];
          if(c+v[i-1]>max){p2++;c=0;}
          cout<<parts2[i]<<" ";
        }
    
    parts2[0]=p2;
    cout<<'\n';
   
	if(p1<=p2)
		{ f=1; cout<<"L2R\n";}
	else {f=0; cout<<"R2L\n";}
	
		    cout<<'(';
		    for(i=0;i<d-1;i++)
		      {
		         cout<<v[i];
			 	if(f==1)
			 		{
		              if( parts1[i+1]>parts1[i])
					     cout<<"),(";
		              else cout<<',';
					  
				    }
				 else 
					 {
   		              if( parts2[i+1]<parts2[i])
   					     cout<<"),(";
   		              else cout<<',';
				     }	
		        }
		    cout<<v[d-1]<<")\n";
			
			
			
    return f==1?p1:p2;
}
int main()
{
  int d,k,i=0,max=0;
  cin>>d;
  vector<int>v2(d);
  vector<tuple2> v(d);
  while(i<d){cin>>v[i].x;v[i].pos=i;max+=(v2[i]=v[i].x);i++;}
  
  cin>>k;
  //sort(v.begin(),v.end(),cmp);
  //for(i=0;i<d;i++)
  //cout<<'('<<v[i].x<<','<<v[i].pos<<')'<<' ';
  
  int k_=k,p=d,m=max/k;
  do
    { /*int m=max,c=0;p=1;
      m/=(k_+1);m++;
		cout<<'('<<k_<<')'<<m<<endl;
      
		*/cout<<'('<<m++<<')'<<endl;//*/
      
		p=partition(v2,m);
		//m++;
		//--k_;
    }while(p>k);
	
   return 0;
}
