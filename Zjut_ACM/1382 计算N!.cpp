#include <iostream>
using namespace std;
int main()
{
	int n;
	while( cin>>n )
	{
		int i,j,k;
		int a[400];
		for( i=1; i<400; i++ )
			a[i]=0;
		a[0]=1;
		if( n==0 )
			cout<<1<<endl;
		else
		{
			for( i=1; i<=n; i++ )
			{
				for( j=0; j<400; j++ )
					a[j]*=i;
				for( k=0; k<399; k++ )
				{
					a[k+1]+=a[k]/10;
					a[k]%=10;
				}
			}		
			j=399;
			while( !a[j] )
				j--;
			for( i=j; i>=0; i-- )
				cout<<a[i];
			cout<<endl;
		}
	}
	return 0;
}