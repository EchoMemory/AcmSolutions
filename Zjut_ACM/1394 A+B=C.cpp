#include <iostream>
using namespace std;
int main()
{
	long /*long*/ n;

	while( cin>>n )
	{
		if( n%2==0 )
			cout<<(n>>1)<<" "<<(n>>1)<<endl
			;
		else
			cout<<(n>>1)<<" "<<(n>>1)+1<<endl;
	}
	return 0;
}