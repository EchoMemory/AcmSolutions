#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	unsigned m,n;
	int a[100],b[100],c[100];
	int i,j,k;

	while( cin>>n>>m && m && n )
	{
		k=0;
		for( i=0; i<n; i++ )
			cin>>a[i];
		for( i=0; i<m; i++ )
			cin>>b[i];
		for( i=0; i<n; i++ )
		{
			for( j=0; j<m; j++ )
				if( b[j]==a[i] )
					break;
			if( j==m )
				c[k++]=a[i];
		}
		if( k==0 )
			cout<<"NULL"<<endl;
		else
		{
			sort( c,c+k );
			for( i=0; i<k; i++ )
			{
				if( i==k-1 )
					cout<<c[i]<<endl;
				else
					cout<<c[i]<<" ";
			}
		}
	}
	return 0;
}
