#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while( t-- )
	{
		int n;
		scanf( "%d",&n);
		if( n<=9 )
			if( n==3 || n==6 )
				printf( "No\n" );
			else
				printf( "Yes\n" );
		else
		{
			if( (n-10)%10==0 || (n-13)%10==0 || (n-16)%10==0 )
				printf( "No\n" );
			else
				printf( "Yes\n" );
		}
	}
	return 0;
}