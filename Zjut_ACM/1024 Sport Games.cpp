#include <iostream>
#include <math.h>
using namespace std;
struct ok{
	unsigned x;
	unsigned y;
	unsigned number;
};
int main()
{
	struct ok s[1001],hold;
	unsigned n,m;
	int i,j,temp;
	double sum[10];
	while( cin>>n )
	{
		for( j=0; j<n; j++ )
		{
			cin>>m>>s[0].x>>s[0].y;
			sum[j]=0;
			for( i=1; i<=m; i++ )
				cin>>s[i].number>>s[i].x>>s[i].y;
			for( temp=1; temp<=m; temp++ )//½«±àºÅÅÅÐò
				for( i=1; i<=m-temp; i++ )
					if( s[i].number > s[i+1].number )
					{
						hold=s[i];
						s[i]=s[i+1];
						s[i+1]=hold;
					}
			for( i=1; i<=m; i++ )//¼ÆËã¾àÀë
				sum[j]+=sqrt( double((s[i].x-s[i-1].x)*(s[i].x-s[i-1].x)) +
				double((s[i].y-s[i-1].y)*(s[i].y-s[i-1].y)) );
		}
		for( j=0; j<n; j++ )
		printf( "%.3lf\n", sum[j] );
	}
	
	return 0;
}