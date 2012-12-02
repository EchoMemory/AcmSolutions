#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	int n,m;
	int i,j;
	int a[100];
	double fc,sum,x,y;
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			sum=0;
			y=0;
			cin>>m;
			for( j=0; j<m; j++ )
			{
				cin>>a[j];
				sum+=a[j];
			}
			x=sum/m;
			for( j=0; j<m; j++ )
				y+=(a[j]-x)*(a[j]-x);
			fc=sqrt(y/m);
			printf( "%.5lf\n", fc );
		}
	}
}


