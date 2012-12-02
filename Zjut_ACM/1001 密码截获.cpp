#include <iostream>
using namespace std;

int f1( char s[], int a,int b )
{
	while( a<b )
	{
		if( s[a]!=s[b] )
			return 0;
		else
		{
			a++;
			b--;
		}
	}
	return 1;
}
int f2( char s[], int len )
{
	int i,j;
	for( i=len; i>1; i-- )
		for( j=0; j<=len-i; j++ )
			if( f1(s,j,j+i-1) )
				return i;
	return 1;
}

int main()
{
	char s[300];
	while( gets(s) )
	{
		int len=strlen(s);
		int i=f2( s, len );
		cout<<i<<endl;
	}
	return 0;
}