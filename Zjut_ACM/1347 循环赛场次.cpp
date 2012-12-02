#include <iostream>
using namespace std;
int f( int m, int n )
{
	int result=1,i;
		for( i=1; i<=n; i++ )
		{
			result*=(m-i+1);
			result/=i;
		}
	return result;
}
int main()
{
	unsigned n;
	while( cin>>n )
		cout<<f(n,2)<<endl;
	return 0;
}