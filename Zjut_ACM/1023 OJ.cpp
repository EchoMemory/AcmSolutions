#include <iostream>
using namespace std;
int main()
{
	int t;
	for( cin>>t; t>0; t-- )
	{
		char s[3];
		cin>>s;
		int a,b;
		a=(s[0]-'A')%3;
		b=(s[1]-'A')%3;
		if( b==1 )
			cout<<-1<<endl;
		else
		{
			if( a==1 && b==0 )
				cout<<41<<endl;
			else if( a==1 && b==2 )
				cout<<47<<endl;
			else if( a==0 && b==2 )
				cout<<17<<endl;
			else if( a==0 && b==0 )
				cout<<11<<endl;
			else if( a==2 && b==0 )
				cout<<71<<endl;
			else if( a==2 && b==2 )
				cout<<79<<endl;
		}
	}
	return 0;
}
