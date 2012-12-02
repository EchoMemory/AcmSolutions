#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef struct{
	int x,y;
}OK;
int main()
{
	int n;
	int g=0;
	while( cin>>n && n )
	{
		if( g++ )
			cout<<endl;
		vector<int> v;
		OK temp[100];
		int i,d;
		int x1,x2,y1,y2,a,b,c;

		cin>>x1>>y1>>x2>>y2;
		a=x1-x2,b=y1-y2;
		c=a*y1-b*x1;

		cin>>temp[0].x>>temp[0].y;
		if( x1==x2 )
			d=abs( x1-temp[0].x);
		else
			d=abs(b*temp[0].x-a*temp[0].y+c);
		v.push_back(d);

		int min=d;
		for( i=1; i<n; i++ )
		{
			cin>>temp[i].x>>temp[i].y;
			if( x1==x2 )
				d=abs( x1-temp[i].x);
			else
				d=abs(b*temp[i].x-a*temp[i].y+c);
			v.push_back(d);
			if( d<min )
				min=d;
		}
		for( i=0; i<n; i++ )
			if( v[i]==min )
				cout<<temp[i].x<<" "<<temp[i].y<<endl;
		v.clear();
	}
	return 0;
}