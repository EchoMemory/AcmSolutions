#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct ok{
	char s[100];
	int len;
};
int main()
{
	int n;
	struct ok x[100],hold;
	int i,j,g=0;
	int temp;
	while( cin>>n && n )
	{
		if (g++ )
			cout<<endl;
		for( i=0; i<n; i++ )
		{
			cin>>x[i].s;
			x[i].len=strlen( x[i].s );
		}
		for( temp=0; temp<n; temp++ )
			for( j=0; j<n-temp-1; j++ )
			{
				if( x[j].len==x[j+1].len )
					if( atol(x[j].s) > atol(x[j+1].s) )
					{
						hold=x[j];
						x[j]=x[j+1];
						x[j+1]=hold;
					}
				if( x[j].len>x[j+1].len )
					{
						hold=x[j];
						x[j]=x[j+1];
						x[j+1]=hold;
					}
			}
		for( j=0; j<n; j++ )
			cout<<x[j].s<<endl;
		cout<<endl;
	}
	return 0;
}