#include <iostream>
using namespace std;
int main()
{
	char s[10],t[10];
	while( cin>>s>>t )
	{
		int a,b;
		if( s[strlen(s)-1]=='C' )
				a=-atoi(s);
		else
			a=atoi(s);
		if( t[strlen(t)-1]=='C' )
			b=-atoi(t);
		else
			b=atoi(t);
		cout<<abs(a-b)<<endl;
	}
	return 0;
}