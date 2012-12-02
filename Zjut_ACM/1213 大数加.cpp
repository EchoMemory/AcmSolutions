#include <iostream>
using namespace std;
int main()
{
	unsigned n;
	char s[201];
	int a[202];
	int i,j,k;

	while( cin>>n && n )
	{
		for( j=0; j<202; j++ )
			a[j]=0;
		for( i=0; i<n; i++ )
		{
			cin>>s;
			for( j=strlen(s)-1,k=0; j>=0; j--,k++ )
				a[k]+=s[j]-'0';
		}
		for( j=0; j<201; j++ )
		{
			a[j+1]+=a[j]/10;
			a[j]%=10;
		}
		j=201;
		while( !a[j] )
			j--;
		for( k=j; k>=0; k-- )
			cout<<a[k];
		cout<<endl;
	}
	return 0;
}