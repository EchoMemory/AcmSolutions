#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	int a,b;
}OK;
OK x[1000001];
bool cmp1( OK p, OK q )
{
	return p.b<q.b;
}
bool cmp2( OK p, OK q )
{
	return p.a<q.a;
}
int main()
{
	int t;cin>>t;
	while( t-- )
	{
		int i,n,m,k;
		scanf("%d%d",&n,&m);
		k=n/2;
		for( i=0; i<m; i++ )
		{
			scanf("%d",&x[i].a);
			x[i].b=abs(k-x[i].a);
		}
		sort(x,x+m,cmp1);
		printf("%d ",(n-x[0].a)<(x[0].a-0)?(n-x[0].a):(x[0].a-0));
		sort(x,x+m,cmp2);
		if( x[0].a-0 < n-x[m-1].a )
			printf("%d\n",n-x[0].a);
		else
			printf("%d\n",x[m-1].a);
	}
	return 0;
}
/*
3
10 3
2 6 7
214 7
11 12 7 13 176 23 191
*/