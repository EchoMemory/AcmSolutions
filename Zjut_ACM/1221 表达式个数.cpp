#include <iostream>
#include <cmath>
using namespace std;
int a[13][4100];
int main()
{
	int i,j;
	a[0][0]=1;
	for( i=1; i<13; i++ )
	{
		for( j=0; j<(int)pow(2.0,(i-1)*1.0); j++ )
			a[i][j]=a[i-1][j]+i+1;
		for( j=0; j<(int)pow(2.0,(i-1)*1.0); j++ )
			a[i][j+(int)pow(2.0,(i-1)*1.0)]=a[i-1][j]-i-1;
	}
	int n,m;
	while( cin>>n>>m )
	{
		int count=0;
		for( i=0; i<(int)pow(2.0,(n-1)*1.0); i++ )
			if( a[n-1][i]==m )
				count++;
		if( count==0 )
			cout<<"NO"<<endl;
		else
			cout<<count<<endl;
	}
	return 0;
}