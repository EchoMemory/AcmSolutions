#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct{
	int x,y;
}OK;
bool cmp( OK a, OK b )
{
	if( a.x==b.x )
		return a.y<b.y;
	else
		return a.x<b.x;
}
int main()
{
	int t;
	while( cin>>t && t )
	{
		int i,j;
		OK temp;
		vector<OK> v;
		vector<int> g,h;
		for( i=0; i<t; i++ )
		{
			cin>>temp.x>>temp.y;
			v.push_back(temp);
		}
		sort( v.begin(),v.end(),cmp );
		int d;
		d=(v[0].x-v[1].x)*(v[0].x-v[1].x)+(v[0].y-v[1].y)*(v[0].y-v[1].y);
		int min=d;
		for( i=0; i<t-1; i++ )
			for( j=i+1; j<t; j++ )
			{
				d=(v[i].x-v[j].x)*(v[i].x-v[j].x)+(v[i].y-v[j].y)*(v[i].y-v[j].y);
				if( d<min )
					min=d;
			}
		for( i=0; i<t-1; i++ )
			for( j=i+1; j<t; j++ )
			{
				d=(v[i].x-v[j].x)*(v[i].x-v[j].x)+(v[i].y-v[j].y)*(v[i].y-v[j].y);
				if( d==min )
				{
					g.push_back(i);
					h.push_back(j);
				}
			}
		for( i=0; i<g.size(); i++ )
			cout<<"("<<v[g[i]].x<<","<<v[g[i]].y<<")"<<" "
				<<"("<<v[h[i]].x<<","<<v[h[i]].y<<")"<<endl;
		v.clear();
		g.clear();
		h.clear();
		cout<<endl;
	}
	return 0;
}