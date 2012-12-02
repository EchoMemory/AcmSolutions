#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	char s[102];
	int a[101];
	int i,j,k;

	while( cin>>s>>n )
	{
		if( n==0 || !strcmp( s, "0" ) )
			cout<<0<<endl;
		else
		{
			for( j=0; j<101; j++ )
				a[j]=0;
			for( i=0; i<n; i++ )
				for( j=strlen(s)-1,k=0; j>=0; j--,k++ )
					a[k]+=s[j]-'0';
			for( j=0; j<100; j++ )
			{
				a[j+1]+=a[j]/10;
				a[j]%=10;
			}
			j=100;
			while( !a[j] )
				j--;
			for( k=j; k>=0; k-- )
				cout<<a[k];
			cout<<endl;
		}
	}
	return 0;
}