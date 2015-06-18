#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int t;
	for(cin>>t;t;t--)
	{
		int R,G,B,M,mr=0,mg=0,mb=0,max=0;
		cin>>R>>G>>B>>M;
		int r[R],g[G],b[B];
		for(int i=0;i<R;i++){cin>>r[i];if(mr<r[i])mr=r[i];}
		for(int i=0;i<G;i++){cin>>g[i];if(mg<g[i])mg=g[i];}
		for(int i=0;i<B;i++){cin>>b[i];if(mb<b[i])mb=b[i];}
		//cout<<"mr->"<<mr<<"mg->"<<mg<<"mb->"<<mb<<endl;
		for(int i=0;i<M;i++)
		{
			if(mr>=mb&&mr>=mg)mr>>=1;
			else if(mb>=mr&&mb>=mg)mb>>=1;
			else if(mg>=mb&&mg>=mr)mg>>=1;
			//cout<<i<<"mr->"<<mr<<"mg->"<<mg<<"mb->"<<mb<<endl;
		}
		//cout<<"mr->"<<mr<<"mg->"<<mg<<"mb->"<<mb<<endl;
		if(max<mr)max=mr;
		if(max<mg)max=mg;
		if(max<mb)max=mb;
		cout<<max<<endl;
	}

return 0;
}