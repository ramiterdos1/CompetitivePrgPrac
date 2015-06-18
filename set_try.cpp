#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;
class Node
{
 public:
 int val, height;
 Node *point_to;
 Node(int a)
  {
    val=a;height=1;
    point_to=this;
  } 
};
Node *find(Node *a)
{
  Node *p=a->point_to;
  //cout<<"FIND:"<<p->val<<":"<<a->val<<":"<<p<<":"<<a<<'\n';
  if(p!=a)p=find(p);
  return p;
}
void Union(Node *a,Node *b)
 {
   a=find(a);b=find(b);
   int h1=a->height,h2=b->height;
   if(h1==h2)
     {
       b->point_to=a;
       a->height+=1;cout<<"INC"<<a->val<<'\n';
     } 
    else if(h1>h2)
        {
          b->point_to=a;
        }
    else {
           a->point_to=b;
         }
  

 }
int main()
{
vector<int> vi(100);
int n=1,sz=0;
while(n!=0)
{
  cin>>n;
  vi[sz++]=n;
}
for(int i=0;i<sz;i++)cout<<vi[i]<<' ';
cout<<'\n';
cout<<"The size of entered elements = "<<sz<<"!\n";
cout<<"What element less than?\n";
int l;cin>>l;
vector<Node *> a(sz+2);
a[0]=new Node(l);a[sz+1]=new Node(-1);
for(int i=0;i<sz;i++)
     {
        a[i+1]=new Node(vi[i]);
        //cout<<a[i+1]<<':'<<a[i+1]->point_to<<'\n';
      }
for(int i=0;i<sz;i++)
   {
     if(vi[i]<l)Union(a[0],a[i+1]);
     else Union(a[sz+1],a[i+1]);
   }

for(int i=0;i<sz;i++)
 {      Node *b=find(a[i+1]);
         cout<<vi[i]<<" belongs to -- "<<b->val<<"..."<<b->height<<'\n'; 
}
return 0;
}
