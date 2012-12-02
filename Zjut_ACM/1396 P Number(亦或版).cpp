#include <iostream>
using namespace std;//a^a=0,a^0=a
int main()
{
	int n,k;
	while( cin>>n && n )
	{
		int res=0;
		for( int i=0; i<n; i++ )
		{
			scanf("%d",&k);
			res=(res^k);
		}
		cout<<res<<endl;
	}
	return 0;
}