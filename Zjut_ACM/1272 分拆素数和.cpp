#include <iostream>
#include <cmath>
using namespace std;
int ZhiS( int n)
{
	int i;
	if( n==2 )
		return 1;
	else
		for( i=2; i<=sqrt(n*1.0); i++ )
			if( n%i==0 )
				return 0;
	return 1;
}
int main()
{
	int n;
	while( cin>>n && n )
	{
		int count=0;
		for(int i=2; i<n/2; i++ )
			if( ZhiS(i) && ZhiS(n-i) )
				count++;
		cout<<count<<endl;
	}
	return 0;
}