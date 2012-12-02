#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	__int64 w,s,sum;
}OK;
OK x[50005];
bool cmp( OK a, OK b )
{
	return a.sum<b.sum;
}
int main()
{
	int n;
	while( cin>>n )
	{
		int i;
		for( i=0; i<n; i++ )
		{
			scanf("%I64d%I64d",&x[i].w,&x[i].s);
			x[i].sum=x[i].w+x[i].s;
		}
		sort(x,x+n,cmp);
		__int64 all=0,max=-100000001;
		for( i=0; i<n; i++ )
		{
			if( all-x[i].s > max )
				max=all-x[i].s;
			all+=x[i].w;
		}
		printf("%I64d\n",max);
	}
	return 0;
}