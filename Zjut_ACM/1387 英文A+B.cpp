#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while( getline( cin,s ) )
	{
		int i;
		int a=0,b=0;
		int j=s.find('+');
		for( i=0; i<s.size(); i++ )
		{
			if( i<j )
			{
				if( s[i]=='z' && s[i+1]=='e' )
					a=10*a+0;
				else if( s[i]=='o' && s[i+1]=='n' )
					a=10*a+1;
				else if( s[i]=='t' && s[i+1]=='w' )
					a=10*a+2;
				else if( s[i]=='t' && s[i+1]=='h' )
					a=10*a+3;
				else if( s[i]=='f' && s[i+1]=='o' )
					a=10*a+4;
				else if( s[i]=='f' && s[i+1]=='i' )
					a=10*a+5;
				else if( s[i]=='s' && s[i+1]=='i' )
					a=10*a+6;
				else if( s[i]=='s' && s[i+1]=='e' )
					a=10*a+7;
				else if( s[i]=='e' && s[i+1]=='i' )
					a=10*a+8;
				else if( s[i]=='n' && s[i+1]=='i' )
					a=10*a+9;
			}
			else
			{
				if( s[i]=='z' && s[i+1]=='e' )
					b=10*b+0;
				else if( s[i]=='o' && s[i+1]=='n' )
					b=10*b+1;
				else if( s[i]=='t' && s[i+1]=='w' )
					b=10*b+2;
				else if( s[i]=='t' && s[i+1]=='h' )
					b=10*b+3;
				else if( s[i]=='f' && s[i+1]=='o' )
					b=10*b+4;
				else if( s[i]=='f' && s[i+1]=='i' )
					b=10*b+5;
				else if( s[i]=='s' && s[i+1]=='i' )
					b=10*b+6;
				else if( s[i]=='s' && s[i+1]=='e' )
					b=10*b+7;
				else if( s[i]=='e' && s[i+1]=='i' )
					b=10*b+8;
				else if( s[i]=='n' && s[i+1]=='i' )
					b=10*b+9;
			}
		}
		if( a || b )
			cout<<a+b<<endl;
		else
			break;
	}
	return 0;
}
