#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	int a[50];
	int i,j;
	int sum;
	while( cin>>n && n )
	{
		sum=0;
		for( i=0; i<n; i++ )
			cin>>a[i];
		for( i=1; i<n; i++ )
			for( j=0; j<i; j++ )
				if( a[j]>a[i] )
					sum++;
		cout<<sum<<endl;
	}
	return 0;
}
