#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		int m,j,k;
		int flag=2;
		for( cin>>m; m>0; m-- )
		{
			cin>>j>>k;
			if( j==flag )
				flag=k;
			else if( k==flag )
				flag=j;
		}
		cout<<flag<<endl;
	}
	return 0;
}