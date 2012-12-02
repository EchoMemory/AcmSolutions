#include <iostream>
using namespace std;
int main()
{
	int n,a[100];
	int i;
	double average;
	double sum;
	int temp,hold;
	while( cin>>n )
	{
		sum=0;
		for( i=0; i<n; i++ )
			cin>>a[i];
		for( temp=0; temp<n; temp++ )
			for( i=0; i<n-temp-1; i++ )
				if( a[i]>a[i+1] )
				{
					hold=a[i];
					a[i]=a[i+1];
					a[i+1]=hold;
				}
		for( i=1; i<n-1; i++ )
			sum+=a[i];
		average=sum/(n-2);
		printf( "%.2lf\n" ,average );
	}
	return 0;
}