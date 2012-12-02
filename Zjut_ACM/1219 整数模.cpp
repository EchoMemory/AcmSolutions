#include <iostream>
using namespace std;
int main()
{
	unsigned a,p,m,x;
	while( cin>>a>>p>>m && ( a || p || m ) )
	{
		x=1;
		while( p )
		{
			a%=m;
			while( !(p&1) )
				p>>=1,a=(a*a)%m;
			p--;
			x=x*a%m;
		}
		cout<<x<<endl;
	}
	return 0;
}