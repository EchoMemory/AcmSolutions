#include <iostream>
using namespace std;
int a[100];
int main()
{
	int m;
	while( cin>>m )
	{
		int i,count=0;
		for( i=0; i<m; i++ )
			scanf( "%d",&a[i] );
		while( 1 )
		{
			for( i=0; i<m; i++ )
				if( a[i]<0 )
				{
					if( i==0 )
					{
						a[m-1]+=a[i];
						a[i+1]+=a[i];
						a[i]=-a[i];
					}
					else if( i==m-1 )
					{
						a[0]+=a[i];
						a[i-1]+=a[i];
						a[i]=-a[i];
					}
					else
					{
						a[i-1]+=a[i];
						a[i+1]+=a[i];
						a[i]=-a[i];
					}
					count++;
					break;
				}
			if( i==m )
				break;
		}
		cout<<count<<endl;
	}
	return 0;
}