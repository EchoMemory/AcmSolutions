#include <iostream>
#include <cmath>
using namespace std;
double f( double r1, double r2, double d )
{
	double cos=(r1*r1+d*d-r2*r2)/2/r1/d;
	double zj1=r1*cos;
	double zj2=sqrt( r1*r1 - zj1*zj1 );
	double s=r1*r1*( acos(cos) )-zj1*zj2;
	return s;
}
int main()
{
	const double pi=acos(-1.0);
	double x1,y1,r1,x2,y2,r2,p,d,square,money;
	unsigned t;
	for( cin>>t; t>0; t-- )
	{
		square=0;
		cin>>x1>>y1>>r1>>x2>>y2>>r2>>p;
		d=sqrt( pow((x1-x2),2) + pow((y1-y2),2) );
		if( d <= fabs( r1-r2 ) )
		{
			if( r1>r2 )
				square+=pi*r1*r1;
			else
				square+=pi*r2*r2;
		}
		else
			if( d >= r1+r2 )
				square+=pi*r1*r1 + pi*r2*r2;
			else
				square+=( pi*r1*r1 + pi*r2*r2 - f(r1,r2,d) - f(r2,r1,d) );
		money=square*p;
		printf( "%.2lf\n", money );
	}
	return 0;
}