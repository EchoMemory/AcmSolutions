#include <iostream>
using namespace std;
int main()
{
	int n;
	int x,y,z;
	int i;
	while( cin>>n )
	{
		for(  i=0; i<n; i++ )
		{
			cin>>x>>y>>z;
			if( x+y==z )
				cout<<x<<"+"<<y<<"="<<z<<endl;
			else
				if( x-y==z )
					cout<<x<<"-"<<y<<"="<<z<<endl;
			else
				if( y-x==z )
					cout<<y<<"-"<<x<<"="<<z<<endl;
			else
				if( x*y==z )
					cout<<x<<"*"<<y<<"="<<z<<endl;
			else
				if( x/y==z )
					cout<<x<<"/"<<y<<"="<<z<<endl;
			else
				if( y/x==z )
					cout<<y<<"/"<<x<<"="<<z<<endl;
			else
				cout<<"None"<<endl;
		}
	}
	return 0;
}