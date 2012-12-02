#include <iostream>
using namespace std;
int main()
{
	int n,m,g=0;
	char c;
	while( cin>>n>>m>>c )
	{
		if( g++ )
			cout<<endl;
		for( int i=0; i<n; i++ )
		{
			int a,b,j,k,l;
			if( n%2 )
				a=n-1,b=n;
			else
				a=n,b=n-1;
			for( l=0; l<m; l++ )
				if( i%2 )
				{
					for( j=0; j<a; j++ )
						if( j%2 )
							for( k=0; k<m; k++ )
								cout<<c;
						else
							for( k=0; k<m; k++ )
								cout<<' ';
					cout<<endl;
				}
				else
				{
					for( j=0; j<b; j++ )
						if( j%2 )
							for( k=0; k<m; k++ )
								cout<<' ';
						else
							for( k=0; k<m; k++ )
								cout<<c;
					cout<<endl;
				}
		}
	}
	return 0;
}