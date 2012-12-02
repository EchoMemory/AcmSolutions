#include <iostream>
using namespace std;
void main()
{
	int n,m;
	char c;
	int i,j,k;
	int g=0;

	while( cin>>n )
	{		
		for( i=0; i<n; i++ )
		{
			if( g++ )
			cout<<endl;
			cin>>c>>m;			
			if( m%2==1 )
			{
				for( j=1; j<=m; j++ )
				{
					if( j%(m/2)==1 )
					{
						for( k=0; k<m/6+1; k++ )
							cout<<" ";
						for( k=0; k<m/2-1; k++ )
							cout<<c;
						cout<<endl;
					}
					else
					{
						for( k=0; k<m/6+1; k++ )
							cout<<c;
						for( k=0; k<m/2-1; k++ )
							cout<<" ";
						for( k=0; k<m/6+1; k++ )
							cout<<c;
						cout<<endl;
					}
				}
			}
			else
			{
				for( k=1; k<=m/6+1; k++ )
					cout<<" ";
				for( k=1; k<=m/2-1; k++ )
					cout<<c;
				cout<<endl;
				for( j=0; j<m/2-2; j++ )
				{
					for( k=1; k<=m/6+1; k++ )
						cout<<c;
					for( k=1; k<=m/2-1; k++ )
						cout<<" ";
					for( k=1; k<=m/6+1; k++ )
						cout<<c;
					cout<<endl;
				}
				for( k=1; k<=m/6+1; k++ )
					cout<<" ";
				for( k=1; k<=m/2-1; k++ )
					cout<<c;
				cout<<endl;
				for( j=0; j<m/2-1; j++ )
				{
					for( k=1; k<=m/6+1; k++ )
						cout<<c;
					for( k=1; k<=m/2-1; k++ )
						cout<<" ";
					for( k=1; k<=m/6+1; k++ )
						cout<<c;
					cout<<endl;
				}
				for( k=1; k<=m/6+1; k++ )
					cout<<" ";
				for( k=1; k<=m/2-1; k++ )
					cout<<c;
				cout<<endl;
			}
		}
	}
}

				