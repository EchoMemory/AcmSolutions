#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	char s1[100],s2[100],s3[200];
	gets(s1);
	gets(s2);
	sort( s1,s1+strlen(s1) );
	sort( s2,s2+strlen(s2) );
	if( !strcmp( s1,s2 ) )
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	while( gets(s3) )
	{
		gets(s1);
		gets(s2);
		sort( s1,s1+strlen(s1) );
		sort( s2,s2+strlen(s2) );
		if( !strcmp( s1,s2 ) )
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}