#include <iostream>
#include <vector>
using namespace std;
typedef struct{
	int x,y;
}dis;
int main()
{
	int n;
	while( cin>>n && n )
	{
		dis temp;
		vector<dis> v;
		vector<int> g,h;
		int min;
		int i,j,k,a,b;
		int d;
		for( i=0; i<n; i++ )
		{
			cin>>temp.x>>temp.y;
			v.push_back(temp);
		}
		a=0;
		b=1;
		min=(v[a].x-v[b].x)*(v[a].x-v[b].x)+(v[a].y-v[b].y)*(v[a].y-v[b].y);
		for( j=0; j<n-1; j++ )
			for( k=j+1; k<n; k++ )
			{
				d=(v[j].x-v[k].x)*(v[j].x-v[k].x)+(v[j].y-v[k].y)*(v[j].y-v[k].y);
				if( d<min)
				{
					min=d;
					a=j,b=k;
				}
			}
		for( j=0; j<n-1; j++ )
			for( k=j+1; k<n; k++ )
			{
				d=(v[j].x-v[k].x)*(v[j].x-v[k].x)+(v[j].y-v[k].y)*(v[j].y-v[k].y);
				if( d==min)
				{
					g.push_back(j);
					h.push_back(k);
				}
			}
		for( i=0; i<g.size(); i++ )
			cout<<"("<<v[g[i]].x<<","<<v[g[i]].y<<")"<<" "
				<<"("<<v[h[i]].x<<","<<v[h[i]].y<<")"<<endl;
		v.clear();
		g.clear();
		h.clear();
	}
	return 0;
}
