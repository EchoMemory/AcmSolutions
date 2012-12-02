#include <iostream>
using namespace std;
int main()
{
	int n;
	while( cin >> n )
	{
		int i,flag=1;
		for( i=2; i*i<=n; i++ )
			if( n%i==0 )
			{
				flag = 0;
				break;
			}
		if ( flag )
		{
			int sum=0;
			while( n>0 )
			{
				sum += n%10;
				n /= 10;
			}
			cout << sum <<endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}