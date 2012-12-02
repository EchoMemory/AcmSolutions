#include <iostream>
using namespace std;
int main()
{
	__int64 i,a[2344];
	int n;
	for( i=1; i<2344; i++ )
		a[i]=(i*i*i+3*i*i+2*i)/6;
	while( cin>>n && n!=EOF )
		printf("%I64d\n",a[n]);
	return 0;
}