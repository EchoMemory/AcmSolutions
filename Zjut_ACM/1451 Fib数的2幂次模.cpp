#include <iostream>
using namespace std;
unsigned f[400000];
int main()
{
	f[0]=f[1]=1;
	for( int i=2; i<400000; i++ )
		f[i] = (f[i-1] + f[i-2]);

	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
		printf("%u\n",m!=32?f[n]%((unsigned)1<<m):f[n]);

	return 0;
}