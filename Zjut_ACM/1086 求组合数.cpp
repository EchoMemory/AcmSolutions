#include <iostream>
using namespace std;
int main()
{
	unsigned m,n;
	int i;
	int result;
	while( cin>>m>>n )
	{
		result=1;
		for( i=1; i<=n; i++ )
		{
			result*=(m-i+1);
			result/=i;
		}
		cout<<result<<endl;
	}
	return 0;
}