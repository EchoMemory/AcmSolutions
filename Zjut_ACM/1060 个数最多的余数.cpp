#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	int m[100];
	int i,k=0;
	int a[100]={0};
	while( cin>>n )
		++a[ n%100 ];
	int max=0;
	for( i=0; i<100; i++ )
		if( a[i]>max )
			max=a[i];
	for( i=0; i<100; i++ )
		if( a[i]==max )
			m[k++]=i;
	for( i=0; i<k; i++ )
	{
		if( i==k-1 )
			cout<<m[i]<<endl;
		else
			cout<<m[i]<<" ";
	}
	return 0;
}
