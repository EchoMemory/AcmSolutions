#include <iostream>
using namespace std;
int main()
{
	int n1,m1,n2,m2;
	while( cin>>n1>>m1 )
	{
		int i,j,k;
		int a[111][111],b[111][111],c[111][111]={0};
		for( i=0; i<n1; i++ )
			for( j=0; j<m1; j++ )
				scanf("%d",&a[i][j]);
		cin>>n2>>m2;
		for( i=0; i<n2; i++ )
			for( j=0; j<m2; j++ )
				scanf("%d",&b[i][j]);
		for( i=0; i<n1; i++ )
			for( j=0; j<m2; j++ )
			{
				for( k=0; k<m1; k++ )
					c[i][j]+=a[i][k]*b[k][j];
				if( j==m2-1 )
					cout<<c[i][j]<<endl;
				else
					cout<<c[i][j]<<' ';
			}
	}
	return 0;
}