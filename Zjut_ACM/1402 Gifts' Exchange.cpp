#include <iostream>//cuo wei pai lie
using namespace std;
__int64 f[1000000],i;
int main()
{
	int t;cin>>t;
	f[0]=f[1]=0,f[2]=1;
	for( i=3; i<1000000; i++ )
		f[i]=((i-1)%20090314)*(f[i-1]+f[i-2])%20090314;
	while( t-- )
	{
		int n;
		scanf("%d",&n);
		printf( "%I64d\n",f[n]);
	}
	return 0;
}