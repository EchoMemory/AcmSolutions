#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double pi=acos(-1.0),e=exp(1.0);
	double n;
	while( cin>>n && n )
	{
		double l=0,r=1000,x,f;
		while( r-l>pow(10.0,-6) )
		{
			x=( l+r )/2;
			f=sqrt(2*x*pi)*pow(x/e,x);
			if( f>n )
				r=x;
			else
				l=x;
		}
		printf( "%.3f\n",x);
	}
	return 0;
}