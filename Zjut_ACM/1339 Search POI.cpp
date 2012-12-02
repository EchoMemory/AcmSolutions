#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n,m;
	while( scanf("%d%d",&n,&m )!=EOF )
	{
		int i,k;
		map<int,int> mp;
		map<int,int>::iterator it;
		for( i=0; i<n; i++ )
		{
			scanf("%d",&k);
			mp[k]++;
		}
		for( i=0; i<m; i++ )
		{
		
			scanf("%d",&k);
			printf( "%d\n",mp[k]);
		}
	}
	return 0;
}