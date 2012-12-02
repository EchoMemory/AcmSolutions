#include <iostream>
#include <stdlib.h>
using namespace std;
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
	if( n==0 || n==1 )
		return 0;
	else
		if( n==2 )
			return 1;
		else
		{
			for( i=2; i<n; i++ )
			{
				if( n%i==0 )
				return 0;
			}
		}
	return 1;
}
void main()
{
	unsigned n;
	while( cin>>n )
	{
		if( n>99999 )
			cout<<"No"<<endl;
		else
		{
			if( DuiC( n ) && ZhiS( n ) )
				cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
	}
}

