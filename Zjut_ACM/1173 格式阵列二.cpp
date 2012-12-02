#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	int i,j;
	int g=0;
	while( cin>>n )
	{
		if( g++ )
			cout<<endl;
		for( i=1; i<=n; i++ )
		{
			for( j=1; j<=n; j++ )
				cout<<" "<<"("<<i<<","<<j<<")";
			cout<<endl;
		}
	}				
	return 0;
}