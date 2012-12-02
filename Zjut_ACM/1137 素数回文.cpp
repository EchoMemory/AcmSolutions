#include <iostream>
#include <stdlib.h>
using namespace std;
int count=0;
int DuiC( int n )
{
	int x;
	int y=0;
	for( x=n; x>0; x/=10 ) 
	{
		y=10*y+x%10;
	}
	if( y==n )
		return 1;
	else
		return 0;
}
int ZhiS( int n)
{
	int i;
	for( i=2; i<n/2; i++ )
	{
		if( n%i==0 )
			return 0;
	}
	return 1;
}
void main()
{
	unsigned m,n;
	int g=0;
	while( cin>>m>>n )
	{
		if( g++ )
			cout<<endl;
		for( int i=m; i<=n; i++ )
		{
			if( i%2==0 || i%3==0 || (i%5==0&&i!=5) || (i%7==0&&i!=7) )
				continue;
			if( DuiC( i ) && ZhiS( i ) )
			{
				cout<<i<<endl;
				count++;
			}
		}
	}
}

