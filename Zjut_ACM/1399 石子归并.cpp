#include <iostream>
#define min(a,b) (a)<(b)?(a):(b)
using namespace std;
int main()
{
	int n;
	while( cin>>n && n!=EOF )
	{
		int i,j,dp[101][101],sum[101][101];
		for( i=0; i<n; i++ )
		{
			scanf( "%d", &sum[i][i]);
			dp[i][i]=0;
		}
		for( i=0; i<n-1; i++ )
			for( j=i+1; j<n; j++ )
				sum[i][j]=sum[i][j-1]+sum[j][j];
		for( j=1; j<n; j++ )
			for( i=0; i+j<n; i++ )
			{
				int p=1000000;
				for( int k=0; k<j; k++ )
					p=min(dp[i][i+k]+dp[i+k+1][i+j]+sum[i][i+j],p);
				dp[i][i+j]=p;
			}
		cout<<dp[0][n-1]<<endl;
	}
	return 0;
}