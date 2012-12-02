#include <iostream>
using namespace std;
int a[1000000]={1};
int main()
{
	int i,j,m,n;
	for( i=1; i<1000000; i++ )
	{
		char s[10];
		sprintf( s,"%d",i);
		for( j=0; j<strlen(s); j++ )
		{
			if( s[j]=='4' )
				break;
			else if( s[j]=='6' && s[j+1]=='2')
				break;
		}
		if( j==strlen(s) )
			a[i]=a[i-1]+1;
		else
			a[i]=a[i-1];
	}
	while( cin>>m>>n && (m || n) )
		cout<<a[n]-a[m-1]<<endl;
	return 0;
}
