#include <iostream>
using namespace std;
void main()
{
	int i,j,k;
	unsigned n;
	int a[13][13];
	while( cin>>n )
	{
		for( i=0; i<=n+2; i++ )
			for( j=0; j<=n+2; j++ )
				a[i][j]=0;
		a[0][0]=1;
		for( i=0; i<=n; i++ )
			for( j=1; j<=i; j++ )
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		for( i=n; i>=1; i-- )			
		{
			for( k=3*(n-i); k>0; k-- )
				cout<<" ";
			for( j=i; j>=1; j-- )
			{
				if( j>1 )
					printf( "%3d   ", a[i][j] );
				else
					printf( "%3d",a[i][j] );
			}
			cout<<endl;
		}		
	}
}