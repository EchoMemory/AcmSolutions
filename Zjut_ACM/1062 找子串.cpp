#include <iostream>
#include <string.h>
using namespace std;
void main()
{
	char string1[100];
	char string2[100];

	while( cin>>string1>>string2 )
	{
		if( strstr( string1, string2 ) != NULL )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}