#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double a[30]={1},b[20]={1},c[15]={1},array[20*30*15];
	int i,j,k;
	for( i=1; i<30; i++ )
		a[i]=a[i-1]*2;
	for( i=1; i<20; i++ )
		b[i]=b[i-1]*3;
	for( i=1; i<15; i++ )
		c[i]=c[i-1]*5;
	
	for( i=0; i<30; i++ )
		for( j=0; j<20; j++ )
			for( k=0; k<15; k++ )
				array[i*15*20+j*15+k]=a[i]*b[j]*c[k];
	sort( array,array+15*20*30);
	int n;
	while( cin>>n )
		cout<<"The "<<n<<"th ugly number is "<<(int)array[n-1]<<'.'<<endl;
	return 0;
}