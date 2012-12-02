#include <iostream>
#include <algorithm>
using namespace std;
int b[12];
void comb_back( int m, int r )
{
	int*a=new int[r];
	int i,j,k=0;
	i=0,a[i]=0;
	do
	{
		if( a[i]-i<m-r+1 )
		{
			if( i==r-1 )
			{
				for( j=0; j<r-1; j++ )
					cout<<b[a[j]]<<' ';
				cout<<b[a[j]]<<endl;
				a[i]++;
				continue;
			}
			i++;
			a[i]=a[i-1]+1;
		}		
		else
		{
			if( i==0 )
				return;
			a[--i]++;
		}
	}while(1);
}	
int main()
{
	int k,g=0;
	while( cin>>k && k )
	{
		if( g++ )
			cout<<endl;
		int i;
		for( i=0; i<k; i++ )
			cin>>b[i];
		sort(b,b+k);
		comb_back( k,6 );
	}
	return 0;
}
/*
4 6
a t c i s w
*/