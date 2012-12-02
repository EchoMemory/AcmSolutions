#include <iostream>
using namespace std;
void main()
{
	int n;
	int i;
	while( cin>>n )
	{
		if( n%2 == 1 )
		{
			cout<<n<<"^3"<<"=";
			for( i=n*n-2*(n/2); i<n*n+2*(n/2); i+=2 )
				cout<<i<<"+";
			cout<<i<<endl;
		}
		else
		{
			cout<<n<<"^3"<<"=";
			for( i=n*n-n+1; i<n*n+n-1; i+=2 )
				cout<<i<<"+";
			cout<<i<<endl;
		}
	}
}