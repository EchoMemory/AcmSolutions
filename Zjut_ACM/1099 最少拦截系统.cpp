#include <iostream>
using namespace std;
int main()
{
	unsigned n,value;
	int i,j,k,flag,a[10000];
	while( cin>>n )
	{
		k=0;
		for( i=0; i<n; i++ )
		{
			flag=0;
			cin>>value;
			for( j=0; j<k; j++ )
				if( a[j]>=value )
				{
					a[j]=value;
					flag=1;
					break;
				}
			if( !flag )
				a[k++]=value;
		}
		cout<<k<<endl;
	}
	return 0;
}