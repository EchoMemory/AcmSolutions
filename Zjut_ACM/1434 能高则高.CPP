#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	int p,q;
}OK;
bool cmp(OK a,OK b)
{
	if( a.p==b.p )
		return a.q<b.q;
	else
		return a.p>b.p;
}
int main()
{
	int n;
	while( cin>>n )
	{
		OK x[10005];
		int h,r,a[10005]={0},f[10005]={0};cin>>h>>r;
		int i,j,k=0,p,q;
		for( i=0; i<r; i++ )
		{
			int flag=1;
			scanf( "%d%d",&p,&q);
			if( p>q )
			{
				int temp=p;
				p=q;
				q=temp;
			}
			for( j=0;j<k; j++ )	
				if(x[j].p==p && x[j].q==q)
				{
					flag=0;
					break;
				}
			if( flag )
			{
				x[k].p=p,x[k].q=q;
				k++;
			}
		}
		sort(x,x+k,cmp);
		for( i=0; i<k; i++ )
			f[x[i].p+1]--,f[x[i].q]++;
		for( i=1; i<=n; i++ )
		{
			a[i]=a[i-1]+f[i];
			cout<<a[i]+h<<endl;
		}
	}
	return 0;
}
