#include <iostream>
using namespace std;
int f[8000000];//31428
int a( int n )
{
	if( n>7999999 )
		return a((n+1)/2)+a((n-1)/2);
	else
		return f[n];
}
int main()
{
	int i;
	f[0]=1,f[1]=1;
	for( i=2; i<8000000; i++ )
		f[i]=f[(i+1)/2]+f[(i-1)/2];
	int n;
	while( scanf("%d",&n)!=EOF )
	{
		if( n>7999999 )
			printf("%d\n",a(n));
		else
			printf("%d\n",f[n]);
	}
	return 0;
}