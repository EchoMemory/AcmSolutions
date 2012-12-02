#include <iostream>
using namespace std;
unsigned a[105][35];
int gcd( int x,int y )
{
	if( y==0 )
		return x;
	else
		return gcd(y,x%y);
}
int main()
{
	int n,m;
	while( scanf("%d%d",&n,&m) && n&& m)
	{
		unsigned sum[35]={0},i,j;
		for( i=0; i<n; i++ )
			for( j=0; j<m; j++ )
			{
				scanf( "%d",&a[i][j]);
				sum[j]+=a[i][j];
			}
		for( j=m-1; j>=0 ; j-- )
		{
			if( sum[j]==0 )
				continue;
			else
			{		
				for( i=0; i<n; i++ )
					cout<<a[i][j]/gcd(a[i][j],sum[j])<<' '<<'/'<<' '<<sum[j]/gcd(a[i][j],sum[j])<<endl;
			}
			break;
		}
		if( j==-1 )
			for( i=0; i<n; i++ )
				cout<<"0 / 1"<<endl;
	}
	return 0;
}

