#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct{
	int a,b;
}FS;
int gcd( int x,int y )
{
	if( y==0 )
		return x;
	else
		return gcd( y,x%y );
}
bool cmp( FS x, FS y )
{
	return x.a*y.b<x.b*y.a;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,i,j;
		vector<FS> v;
		FS temp;
		scanf("%d",&n);
		for( i=1; i<n; i++ )
			for( j=n; j>i; j-- )
				if( gcd(i,j)==1 )
				{
					temp.a=i,temp.b=j;
					v.push_back(temp);
				}
		sort(v.begin(),v.end(),cmp);
		for( i=0; i<v.size()-1; i++ )
			printf("%d/%d,",v[i].a,v[i].b);
		printf("%d/%d\n",v[i].a,v[i].b);
	}
	return 0;
}
