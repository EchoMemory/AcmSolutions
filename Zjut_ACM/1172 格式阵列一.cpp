#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	int i,j;
	int g=0;
	while( cin>>n )
	{
		if( g++ )
			cout<<endl;
		for( i=1; i<=n; i++ )
		{
			printf( "%2d  ",i );
			for( j=i-1; j<n+i-1; j++ )
			{
				if( j==i-1 )
					printf( "%3d", j );
				else
					printf( "%3d", j%n );
			}
			cout<<endl;
		}
	}
	return 0;
}