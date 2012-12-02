#include <iostream>
using namespace std;
int main()
{
	int n,m;
	int i,j,k;
	int flag;
	int a[100][100];
	while( cin>>n )
	{
		for( i=0; i<n; i++ )
		{
			flag=1;
			cin>>m;
			for( j=0; j<m; j++ )
				for( k=0; k<m; k++ )					
					cin>>a[j][k];
			for( j=0; j<m; j++ )
				for( k=0; k<=m/2; k++ )
					if( a[j][k]!=a[j][m-k-1] )
					{
						flag=0;
						break;
					}
			for( j=0; j<=m/2; j++ )
				for( k=0; k<m; k++ )
					if( a[j][k]!=a[m-j-1][k] )
					{
						flag=0;
						break;
					}
			if( flag==1 )
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}				
	return 0;
}