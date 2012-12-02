#include <iostream>
#include <string.h>
using namespace std;
void main()
{
	char s[20];
	while( cin>>s )
	{
		if( !strcmp( s,"Rock" ) )
			cout<<"Paper"<<endl;
		else
			if( !strcmp( s,"Paper" ) )
				cout<<"Scissors"<<endl;
			else
				if( !strcmp( s,"Scissors" ) )
					cout<<"Rock"<<endl;
	}
}
