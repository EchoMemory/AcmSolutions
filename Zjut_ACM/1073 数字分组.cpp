#include <iostream>
#include <algorithm>
using namespace std;
int f( int i, int j, int k )
{
	int a[9];
	int n=0;
	while( i>0 )
	{
		a[n++]=i%10;
		a[n++]=j%10;
		a[n++]=k%10;
		i/=10;
		j/=10;
		k/=10;
	}
	sort(a,a+9);
	for( int temp=0; temp<9; temp++ )
		if( a[temp]!=temp+1 )
			return 0;
	return 1;
}
int main()
{
	int i,j,k;
	for( i=123; i<333; i++ )
		for( j=246; j<667; j++ )
			for( k=369; k<999; k++ )
				if( k==3*i && j==2*i )
					if( f(i,j,k) )
						cout<<i<<" "<<j<<" "<<k<<endl;
	return 0;
}