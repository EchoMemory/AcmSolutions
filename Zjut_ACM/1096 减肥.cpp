#include <iostream>
using namespace std;
int main()
{
	unsigned n,m;
	int a[100][2];
	int b[100];
	int i,j,k;
	int temp,hold;
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			cin>>m;
			for( j=0; j<m; j++ )
				for( k=0; k<2; k++ )
					cin>>a[j][k];
			for( j=0; j<m; j++ )
				b[j]=a[j][1]-a[j][0];
			for( temp=0; temp<m; temp++ )
				for( j=0; j<m-temp-1; j++ )
					if( b[j]>b[j+1] )
					{
						hold=b[j];
						b[j]=b[j+1];
						b[j+1]=hold;
					}
			for( j=0; j<m; j++ )
			{
				if( j<m-1 )
					cout<<b[j]<<" ";
				else
					cout<<b[j];
			}
			cout<<endl;
		}
	}
	return 0;
}


