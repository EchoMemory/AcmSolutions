#include <iostream>
using namespace std;
int main()
{
	int n,m,k;
	while( cin>>n>>m>>k )
	{
		int i,j,l=1,a[55],count=n;
		for( i=1; i<=n; i++ )
			a[i]=i;
		while( count!=k )
		{
			for( j=1; j<m; j++ )				
			{
				if( l==n+1 )
					l=1;
				while( a[l]==0 )
				{
					l++;
					if( l==n+1 )
						l=1;
				}
				l++;
			}
			if( l==n+1 )
				l=1;
			while( a[l]==0 )
			{
				l++;
				if( l==n+1 )
					l=1;
			}
			a[l++]=0;
			count--;
		}
		i=1;
		for( i=1; i<=n && k>0; i++ )
			if( a[i] )
				if( k!=1 )
				{
					cout<<a[i]<<' ';
					k--;
				}
				else
				{
					cout<<a[i]<<endl;
					k--;
				}
	}
	return 0;
}