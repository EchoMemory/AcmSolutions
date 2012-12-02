#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double c1,c2,c3;
	unsigned n;
	int sum;
	c1=log10(2.0*acos(-1.0));
	c2=log10( exp(1.0) );
	while( cin>>n )
	{
		c3=log10(n/1.0);
		sum=1;
		if( n>3 )
			sum=( (c3+c1)/2.0 +n*( c3-c2 ) )+1.0;
		cout<<sum<<endl;
	}
	return 0;
}
