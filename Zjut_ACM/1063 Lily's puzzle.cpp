#include <iostream>
using namespace std;
int main()
{
	int n;
	while( cin>>n && n )
	{
		int a[105][105];
		memset(a,0,sizeof(a));
		int i,j,k,l,w,h,s,t;
		scanf("%d%d",&w,&h);
		for( i=0; i<n; i++ )
		{
			scanf("%d%d",&j,&k);
			a[j][k]=1;
		}
		scanf("%d%d",&s,&t);
		int max=0;
		for( i=1; i<=w-s+1; i++ )
			for( j=1; j<=h-t+1; j++ )
			{
				int count=0;
				for( k=i; k<i+s; k++ )
					for( l=j; l<j+t; l++ )
						if( a[k][l] )
							count++;
				if( count>max )
					max=count;
			}
		for( i=1; i<=w-t+1; i++ )
			for( j=1; j<=h-s+1; j++ )
			{
				int count=0;
				for( k=i; k<i+t; k++ )
					for( l=j; l<j+s; l++ )
						if( a[k][l] )
							count++;
				if( count>max )
					max=count;
			}
		cout<<max<<endl;
	}
	return 0;
}