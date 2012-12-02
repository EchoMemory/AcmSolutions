#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x1,x2,y1,y2,a,b,c;
	cin>>x1>>y1>>x2>>y2;
	a=x1-x2,b=y1-y2;
	c=a*y1-b*x1;
	int x,y,d;
	int max=0;
	double res;
	while( cin>>x>>y )
	{
		d=(b*x-a*y+c)*(b*x-a*y+c);
		if( d>max )
			max=d;
	}
	res=sqrt( max*1.0 / ( pow(a*1.0,2)+pow(b*1.0,2) ) );
	printf( "%.3lf\n",res );
	return 0;
}