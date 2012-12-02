#include <iostream>
using namespace std;
int main()
{
	int m,n,a,b;
	while( cin>>n>>m && n || m )
	{
		for( int k=m; k>0; k-- )
			cin>>a>>b;
		if( n-m-1<=0 )
			cout<<0<<endl;
		else
			cout<<n-m-1<<endl;
	}
	return 0;
}