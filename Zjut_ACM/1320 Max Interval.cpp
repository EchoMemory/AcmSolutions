#include <iostream>
#include <algorithm>
using namespace std;
double a[200005];
int main()
{
	int t;cin>>t;
	while( t-- )
	{
		int i,n;
		scanf( "%d",&n);
		for( i=0; i<n; i++ )
			scanf( "%lf",a+i );
		sort( a,a+n );
		double max=a[1]-a[0];
		for( i=2; i<n; i++ )
			max=max>(a[i]-a[i-1])?max:(a[i]-a[i-1]);
		printf("%.3lf\n",max);
	}
	return 0;
}