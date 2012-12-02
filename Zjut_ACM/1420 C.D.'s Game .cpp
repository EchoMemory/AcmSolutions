#include <iostream>
#define max(a,b) (a)>(b)?(a):(b)
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		int i,j,n,dp[100][100],sum[100][100];
		cin>>n;
		for( i=0; i<n; i++ )
		{
			cin>>sum[i][i];
			dp[i][i]=sum[i][i];
		}

		for( i=0; i<n-1; i++ )
			for( j=i+1; j<n; j++ )
				sum[i][j]=sum[i][j-1]+sum[j][j];

		for( j=1; j<n; j++ )
			for( i=0; i+j<n; i++ )
				dp[i][i+j]=max(sum[i][i+j]-dp[i+1][i+j],sum[i][i+j]-dp[i][i+j-1]);

		cout<<dp[0][n-1]<<' '<<sum[0][n-1]-dp[0][n-1]<<endl;
	}
	return 0;
}