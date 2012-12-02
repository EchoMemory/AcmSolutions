#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	__int64 i,k;
	int n;
	for( cin>>n; n>0; n-- )
	{
		scanf("%I64d",&k);
		i=(__int64)(sqrt(8*k*1.0-7.0)-1)/2;
		if( i*(i+1)/2==k-1  )
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}