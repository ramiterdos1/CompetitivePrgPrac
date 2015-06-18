#include <algorithm>
#include <set>
#include <cstdio>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
set<int> s;
s.insert(5);
s.insert(5);s.insert(6);
int d;
cin>>d;
while(d!=0)
  {
    s.insert(d);cin>>d;
  }
if(s.find(6)!=s.end())cout<<"s has 5!"<<endl;
for(int i :s)cout<<i<<",";
cout<<endl;cout<<"------\n";
for(set<int>::iterator i=s.begin();i!=s.end();i++)
    cout<<*i<<endl;
vector<int> v(s.begin(),s.end()); 
while(next_permutation(v.begin(),v.end()))
    {
        for(int i :v)cout<<i<<",";
        cout<<'\n';
    } 
return 0;
}
