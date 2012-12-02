#include <iostream>
#define mini(a,b) (a)<(b)?(a):(b)
using namespace std;
typedef struct{
	int p,w;
}OK;
int main()
{
	int t;cin>>t;
	while( t-- )
	{
		int n,m,e,f,i,j,dp[10000]={0};
		OK x[555];
		cin>>e>>f>>n;
		m=f-e;
		for( i=1; i<10000; i++ )
			dp[i]=1e8;
		for( i=0; i<n; i++ )
			scanf("%d%d",&x[i].p,&x[i].w);
		for( i=0; i<n; i++ )
			for( j=0; j<=m-x[i].w; j++ )
				dp[j+x[i].w]=mini(dp[j+x[i].w],dp[j]+x[i].p);
		if( dp[m]==1e8 )
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %d.\n",dp[m]);
	}
	return 0;
}