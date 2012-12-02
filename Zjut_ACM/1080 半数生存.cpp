#include <iostream>
using namespace std;
int main()
{
	int p,k;
	int a[2][51];

	while( cin>>p>>k )
	{
		int i,j,x,y,m,n;
		int flag=1;
		for( i=1; i<=p; i++ )
 			a[0][i]=i;
		x=y=p;
		if( p==1 )
		{
			cout<<0;
			y=0;
		}
		n=1;
		for( i=1; y>p/2; i*=-1 )
		{
			if( flag==1 )
			{
				for( j=1; j<=x && y>p/2; j++ )
				{
					if( j%k!=0 )
						a[1][n++]=a[0][j];
					else
						y--;
				}
				if( j<=x )
					for( ; j<=x; j++ )
						a[1][n++]=a[0][j];

				flag=0;
				m=x%k;
				x=y;
				n=1;
			}
			else if( i==-1)
			{
				for( j=1; j<=x && y>p/2; j++ )
				{
					if( j%k!=(k-m)%k )
						a[0][n++]=a[1][j];
					else
						y--;
				}
				if( j<=x )
					for( ; j<=x; j++ )
						a[0][n++]=a[1][j];

				m=(x+m)%k;
				x=y;
				n=1;
			}
			else
			{
				for( j=1; j<=x && y>p/2; j++ )
				{
					if( j%k!=(k-m)%k )
						a[1][n++]=a[0][j];
					else
						y--;
				}
				if( j<=x )
					for( ; j<=x; j++ )
						a[1][n++]=a[0][j];
				m=(x+m)%k;
				x=y;
				n=1;
			}
		}
		if( i==-1 )
			for( j=1; j<=y; j++ )
			{
				if( j==y )
					cout<<a[1][j];
				else
					cout<<a[1][j]<<" ";
			}
		else
			for( j=1; j<=y; j++ )
			{
				if( j==y )
					cout<<a[0][j];
				else
					cout<<a[0][j]<<" ";
			}
		cout<<endl;
	}
	return 0;
}

