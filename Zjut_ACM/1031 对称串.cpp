#include <iostream>
#include <string.h>
using namespace std;
int func( char *s )
{
	char *p1, *p2, len;
	for( len=0; s[len]; len++ );
	p1=s;
	p2=s+len-1;
	while( p1 < p2 )
	{
		if( *p1 != *p2 )
			break;
		else
		{
			p1++;
			p2--;
		}
	}
	if( p1 < p2 )
		return 0;
	else
		return 1;
}
struct hw{
	int len;
	char string[ 100 ];
};
void main()
{	
	int n=0;
	int i;
	int temp;
	struct hw hold;
	struct hw str[ 50 ];
	while( cin>>str[n].string )
	{
		if( func( str[n].string ) == 1 )
			str[n].len = strlen( str[n].string );
		else
			str[n].len = 0;
		n++;
	}
	for( temp=0; temp<n; temp++ )
	{
		for( i=0; i<n-temp-1; i++ )
		{
			if( str[ i ].len > str[ i+1 ].len )
			{
				hold = str[ i ];
				str[ i ] = str[ i+1 ];
				str[ i+1 ] = hold;
			}
		}
	}
	for( i=0; i<n; i++ )
	{
		if( str[i].len !=0 )
			cout<<str[i].string<<endl;
	}
}
