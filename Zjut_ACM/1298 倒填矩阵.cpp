#include <iostream>
using namespace std;
int main()
{
	int n;
	while( cin>>n )
	{
		int i,j,k;
		int a[10][10];
		k=n*n-1;
		for( i=0; i<n; i++ )
			for( j=0; j<n; j++ )
				a[i][j]=k--;
		for( i=0; i<n; i++ )
		{
			for( j=0; j<n; j++ )
			{
				if( a[i][j]<10 )
					cout<<"   0"<<a[i][j];
				else
					printf("%5d",a[i][j]);
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}