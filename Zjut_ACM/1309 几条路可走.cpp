#include <iostream>
using namespace std;
int zuhe( unsigned m, unsigned n )
{
	int i;
	int result;	
	result=1;
	for( i=1; i<=n; i++ )
	{
		result*=(m-i+1);
		result/=i;
	}
	return result;	
}
int main()
{
	unsigned m,n;
	int x;
	while( cin>>m>>n )
	{
		x=zuhe( m+n, m );
		cout<<x<<endl;
	}		
	return 0;
}