#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
	int i;
	int result;
	char s[100];
	while( cin>>s && strcmp( s, "0" ) )
	{
		result=0;
		for( i=0; s[i]!='\0'; i++ )
			result+=(s[i]-'0')*(int)(pow(2.0,double(strlen(s)-i))-1 );
		cout<<result<<endl;
	}
	return 0;
}