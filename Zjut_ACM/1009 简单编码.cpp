#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[200];
	int i;
	
	while( gets( s ) && strcmp( s, "END" ) )
	{
		for( i=0; s[i]!='\0'; i++ )
		{
			if( s[i]=='A' || s[i]=='W'
				|| s[i]=='F' )
				s[i]='I';
			else
				if( s[i]=='C' )
				s[i]='L';
			else
				if( s[i]=='M' )
				s[i]='o';
			else
				if( s[i]=='S' )
				s[i]='v';
			else
				if( s[i]=='D' || s[i]=='P' 
				|| s[i]=='G' || s[i]=='B' )
				s[i]='e';
			else
				if( s[i]=='L' )
				s[i]='Y';
			else
				if( s[i]=='X' )
				s[i]='u';
		}
		cout<<s<<endl;
	}
	return 0;
}
