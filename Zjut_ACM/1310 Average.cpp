#include <iostream>
using namespace std;
int main()
{
	int c,n,a;
	int i,j;
	double sum;
	double result;
	while( cin>>c )
	{		
		for( j=0; j<c; j++ )
		{
			cin>>n;
			sum=0;
			for( i=0; i<n; i++ )
			{
				cin>>a;
				sum+=a;
			}
			result=sum/n;
			printf( "%.3lf\n", result );
		}
	}
	return 0;
}