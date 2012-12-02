#include <iostream>
using namespace std;
#define M 13
int main()
{
	int i,j,k;
	unsigned n;
	int a[M][M];
	int g=0;
	while( cin>>n )
	{
		if( g++ )
			cout<<endl;
		for( i=0; i<=n+2; i++ )
			for( j=0; j<=n+2; j++ )
				a[i][j]=0;
		a[0][0]=1;
		for( i=0; i<=n; i++ )
			for( j=1; j<=i; j++ )
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		for( i=1; i<=n; i++ )			
		{
			for( k=0; k<3*(n-i); k++ )
				cout<<" ";
			for( j=1; j<=i; j++ )
			{
				if( j<i )
				printf( "%3d   ", a[i][j] );
				else
					printf( "%3d",a[i][j] );
			}
			cout<<endl;
		}		
	}
	return 0;
}