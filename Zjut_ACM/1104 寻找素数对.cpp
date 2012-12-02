#include <iostream>
#include <cmath>
using namespace std;
int pn( int x )
{
	int i;
	for( i=2; i<=sqrt(x*1.0); i++ )
		{
			if( x%i==0 )
				break;
			if( i==(int)sqrt(x*1.0) )
				return 1;
		}
	return 0;
}
int main()
{
	int n;
	while( cin>>n && n )
	{
		int i;
		for( i=n/2; i>=2; i-- )
			if( pn(i) && pn(n-i) )
			{
				cout<<i<<" "<<n-i<<endl;
				break;
			}
	}
	return 0;
}